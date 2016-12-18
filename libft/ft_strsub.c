/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:46:29 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 18:05:16 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*res;

	if (s)
	{
		i = start;
		j = 0;
		if (!(res = ft_strnew(len)))
			return (NULL);
		if ((len + start) > ft_strlen(s))
			return (NULL);
		while (s[i] && (i < ((int)len + (int)start)))
			res[j++] = s[i++];
		res[j] = '\0';
		return (res);
	}
	return (NULL);
}
