/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:19:31 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 15:20:17 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strsplit_countwords(char *s, char c)
{
	int		w;

	if (s && (ft_strlen(s) > 0))
	{
		w = 1;
		while (*s)
		{
			if (*s != c)
				++s;
			else
			{
				++w;
				++s;
			}
		}
		return (w);
	}
	return (0);
}

static int		ft_strsplit_wordsize(char *str, char c, int index)
{
	int		i;

	i = index;
	while (str[i] && str[i] != c)
		++i;
	return (i - index);
}

static char		**ft_strsplit_spread(char **res, char *s, char c, int tbsz)
{
	int		size;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = -1;
	k = 0;
	while (++i < tbsz && s[k])
	{
		size = ft_strsplit_wordsize(s, c, k);
		if ((res[i] = ft_strnew(size)))
		{
			while (++j < size && s[k])
				res[i][j] = s[k++];
			j = -1;
			if (s[k] == c)
				k++;
		}
		else
			return (NULL);
	}
	res[i] = NULL;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		wrds;

	if (s && c)
	{
		i = 0;
		j = 0;
		s = ft_chardedouble((char *)s, c);
		wrds = ft_strsplit_countwords((char *)s, c);
		if (!(res = (char **)malloc(sizeof(char *) * wrds + 1)))
			return (NULL);
		res = ft_strsplit_spread(res, (char *)s, c, wrds);
		return (res);
	}
	return (NULL);
}
