/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 14:21:00 by fciprian          #+#    #+#             */
/*   Updated: 2016/12/09 16:24:05 by fciprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*strjoin_for_gnl(char *s1, char *s2)
{
	char			*str;

	if (s2 != NULL && s1 != NULL)
	{
		if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		ft_strdel(&s1);
		return (str);
	}
	return (NULL);
}

char				*join_strings(char **buffer, char **line)
{
	char			*str;
	size_t			length;

	length = ft_strlen(*buffer);
	if ((str = ft_strchr(*buffer, '\n')))
		*str = '\0';
	(*line) = (*line) ? strjoin_for_gnl(*line, *buffer) : ft_strdup(*buffer);
	(str) ? *buffer = ft_strcpy(*buffer, str + 1) : ft_bzero(*buffer, length);
	return (str);
}

int					get_read(const int fd, char **buffer, char **line)
{
	char			*str;
	int				reading;

	reading = 1;
	str = NULL;
	while (reading)
	{
		if ((reading = read(fd, *buffer, BUFF_SIZE)) < 0)
			return (-1);
		if (reading == 0)
			return (0);
		*(*buffer + reading) = '\0';
		if ((str = join_strings(buffer, &(*line))))
			return (1);
	}
	return (0);
}

int					ft_get_next_line(const int fd, char **line)
{
	static char		*buffer;
	int				reading;

	if (BUFF_SIZE <= 0 || fd < 0 || !line)
		return (-1);
	*line = NULL;
	reading = 0;
	if (!buffer)
		buffer = ft_strnew(BUFF_SIZE + 1);
	if (ft_strchr(buffer, '\n') || buffer[0])
		if (join_strings(&buffer, line))
			reading = 1;
	if (!reading)
		reading = get_read(fd, &buffer, line);
	return ((*line) ? 1 : reading);
}
