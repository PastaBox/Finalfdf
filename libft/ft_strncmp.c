/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:33:06 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 18:00:37 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (!*s1 || !*s2 || *s1 != *s2)
			return ((unsigned char)*(s1) - (unsigned char)*(s2));
		++s1;
		++s2;
		++i;
	}
	if (n > 0)
	{
		--s1;
		--s2;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*(s1) - (unsigned char)*(s2));
}
