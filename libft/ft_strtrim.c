/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:18:42 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 19:35:23 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (s)
	{
		i = -1;
		j = ft_strlen(s);
		while (s[++i] && ft_isspace(s[i]))
			continue ;
		if (i == j)
			return (ft_strdup(""));
		while (--j >= 0 && ft_isspace(s[j]))
			continue ;
		j -= i - 1;
		return (ft_strsub(s, i, j));
	}
	return (ft_strdup(""));
}
