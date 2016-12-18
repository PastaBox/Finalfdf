/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:07:29 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 18:03:15 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dtmp;
	char	*stmp;
	void	*tmp;

	i = -1;
	tmp = dst;
	dtmp = (char *)dst;
	stmp = (char *)src;
	while (++i < (int)n)
		dtmp[i] = stmp[i];
	return (tmp);
}
