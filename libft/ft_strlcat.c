/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:40:06 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/13 15:59:00 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (dst[i] && i < size)
		++i;
	j = i;
	while (src[i - j] && (i + 1) < size)
	{
		dst[i] = src[i - j];
		++i;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
