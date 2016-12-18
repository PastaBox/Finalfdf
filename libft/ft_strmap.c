/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:15:21 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 09:29:41 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			res[i] = f(s[i]);
		res[i] = '\0';
		return (res);
	}
	return (0);
}
