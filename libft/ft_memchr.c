/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:16:23 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/09 22:33:40 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)s;
	while (++i < (int)n)
	{
		if (*str == (unsigned char)c)
			return (str);
		++str;
	}
	return (NULL);
}
