/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 01:50:19 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 04:10:33 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dtmp;
	unsigned char	*stmp;

	i = -1;
	dtmp = (unsigned char *)dst;
	stmp = (unsigned char *)src;
	while (++i < (int)n)
	{
		if ((*dtmp++ = *stmp++) == (unsigned char)c)
			return (dtmp);
	}
	return (NULL);
}
