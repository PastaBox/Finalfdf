/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:19:43 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 17:24:47 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	if ((cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		i = -1;
		while (s1[++i])
			cpy[i] = s1[i];
		cpy[i] = '\0';
		return (cpy);
	}
	return (0);
}
