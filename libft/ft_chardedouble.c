/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chardedouble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:45:57 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 15:19:34 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_chardedouble_getsize(char *str, char c)
{
	int		size;
	int		i;

	size = 0;
	i = -1;
	while (str[++i])
	{
		++size;
		if (str[i] == c && str[i + 1] == c)
			while (str[i + 1] == c)
				++i;
	}
	return (size);
}

char			*ft_chardedouble(char *str, char c)
{
	int		i;
	int		j;
	char	*res;

	if (str)
	{
		i = -1;
		j = 0;
		if (!(res = ft_strnew(ft_chardedouble_getsize(str, c))))
			return (NULL);
		while (str[++i])
		{
			if (!(str[i] == c && i == 0))
				res[j++] = str[i];
			if (str[i] == c && str[i + 1] == c)
				while (str[i + 1] == c)
					++i;
		}
		if (res[j - 1] == c)
			res[j - 1] = '\0';
		else
			res[j] = '\0';
		return (res);
	}
	return (NULL);
}
