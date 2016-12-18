/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:04:29 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 17:51:14 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	void		*cpy;

	i = 0;
	cpy = b;
	while (i < len)
	{
		*(char *)b = c;
		++i;
		++b;
	}
	return (cpy);
}
