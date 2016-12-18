/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isope.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:29:37 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 00:24:56 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isope(int c)
{
	if (ft_issimpleope(c) || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}
