/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upsqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:42:45 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/22 13:43:49 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_upsqrt(int nb)
{
	int		i;

	i = -1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (++i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (i);
	}
	return (0);
}
