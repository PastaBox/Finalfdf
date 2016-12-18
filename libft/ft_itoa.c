/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:21:13 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/10 00:39:28 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buff[12];
	char	*num;
	int		i;
	int		m;

	i = -1;
	m = ft_absval(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	while (m > 0)
	{
		buff[++i] = (m % 10) + '0';
		m /= 10;
	}
	if (n < 0)
		buff[++i] = '-';
	buff[++i] = '\0';
	if (!(num = ft_strnew(i + 1)))
		return (NULL);
	num = ft_strdup(ft_strrev(buff));
	return (num);
}
