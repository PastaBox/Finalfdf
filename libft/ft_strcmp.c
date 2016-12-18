/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:54:44 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 23:05:59 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && ((unsigned char)*(s1) == (unsigned char)*(s2)))
	{
		++s1;
		++s2;
	}
	return ((unsigned char)*(s1) - (unsigned char)*(s2));
}
