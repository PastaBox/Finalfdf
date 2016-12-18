/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 11:00:50 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 00:17:04 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		res;

	i = -1;
	neg = 1;
	res = 0;
	str = (char *)ft_skipspace((char *)str);
	if (str[0] == '-')
		neg = -1;
	if (ft_issimpleope(str[0]))
		++i;
	while (str[++i] && ft_isdigit(str[i]))
		res = (res * 10) + (str[i] - '0');
	return (res * neg);
}
