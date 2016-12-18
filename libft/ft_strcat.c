/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:32:29 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 17:27:42 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s1);
	while (s2[++i])
		s1[len + i] = s2[i];
	s1[len + i] = '\0';
	return (s1);
}
