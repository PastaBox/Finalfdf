/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 04:41:27 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 05:14:44 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alc;

	if ((alc = (void *)malloc(sizeof(void *) * size)))
	{
		ft_bzero(alc, size);
		return (alc);
	}
	return (NULL);
}
