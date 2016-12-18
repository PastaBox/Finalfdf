/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:12:58 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/08 18:13:40 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_rev(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dtmp;
	char	*stmp;

	i = (int)n;
	dtmp = (char *)dst;
	stmp = (char *)src;
	while (i-- > 0)
		dtmp[i] = stmp[i];
	return (dst);
}
