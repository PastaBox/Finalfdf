/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:34:48 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/09 15:54:06 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*res;

	if (s && f)
	{
		i = -1;
		len = ft_strlen((char *)s);
		if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (s[++i])
			res[i] = f(i, s[i]);
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
