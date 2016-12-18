/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:46:39 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/10 18:01:57 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;
	int		i;
	int		j;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2) + 1;
		i = 0;
		j = 0;
		if (!(res = ft_strnew(size)))
			return (NULL);
		while (i < size && s1[j])
			res[i++] = s1[j++];
		j = 0;
		while (i < size && s2[j])
			res[i++] = s2[j++];
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
