#include "../inc/fdf.h"

int				ft_get_points(char *string, t_line *line, int ln, int cl)
{
	t_point		*pts;
	char		**tab;
	int			i;
	int			len;

	i = -1;
	tab = ft_strsplit(string, ' ');
	len = ln * cl;
	pts = points_new(len);
	while (++i < len)
	{
		if (ft_isdigit(tab[i][0]))
		{
			pts->pos_x[i] = i % cl;
			pts->pos_y[i] = i / cl;
			pts->pos_z[i] = ft_atoi(tab[i]);
		}
	}
	line->points = pts;
	return (i);
}

char		*replace_string(char *string)
{
	int		index;

	index = 0;
	while (string[index] != '\0')
	{
		if (!ft_isdigit(string[index]) && !ft_isspace(string[index]))
			string[index] = ' ';
		index++;
	}
	string = ft_chardedouble(string, ' ');
	return (string);
}

int			calcul_length_map(char *string)
{
	int		file_descriptor;
	int		lines;
	int		ret;
	char	buffer;

	file_descriptor = open(string, O_RDONLY);
	ret = 0;
	lines = 0;
	if (file_descriptor > 0 && string != NULL)
	{
		while ((ret = read(file_descriptor, &buffer, 1)))
		{
			if (buffer == '\n')
				lines++;
		}
	}
	close(file_descriptor);
	return (lines);
}

int 		calcul_length_x(char *string)
{
	int 	index;
	int		x;

	index = 0;
	x = 0;
	while (string[index] != '\0')
	{
		if (string[index] == '\n')
			x++;
		index++;
	}
	return (x);
}

int				ft_get_the_cl_for_toto_l_abricot(char *newString)
{
	int			index;
	int			nbClForToto;

	index = 0;
	nbClForToto = 0;
	while (newString[index] != '\0')
	{
		if (ft_isdigit(newString[index]))
		{
			while (ft_isdigit(newString[index + 1]))
				index++;
			nbClForToto++;
		}
		index++;
	}
	return (nbClForToto);
}

t_map			*fdf_parse_map(char *path, int file_descriptor)
{
	t_map		*map;
	char		*string;
	char		*newString;

	map = map_new();
	newString = ft_strnew(0);
	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor > 0)
	{
		while ((ft_get_next_line(file_descriptor, &string)) > 0)
		{
			string = replace_string(string);
			if (ft_strlen(newString))
				newString = ft_strjoin_f(newString, ft_strdup(" "));
			newString = ft_strjoin_f(newString, string);
			map->lines->cl = ft_get_the_cl_for_toto_l_abricot(string);
			map->lines->ln++;
		}
		map->lines->length = ft_get_points(newString, map->lines,
			map->lines->ln, map->lines->cl);
		if (map->lines->length == 0)
			error_handler("No data found.", 0);
		map->lines->points->length_x = map->lines->cl;
		map->lines->points->length_y = map->lines->ln;
	}
	return (map);
}
