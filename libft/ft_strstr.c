/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:01:09 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 19:36:07 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	if (!ft_strlen(little))
		return ((char *)big);
	while (*big)
	{
		if (ft_startbyword(big, little))
			return ((char *)big);
		++big;
	}
	return (NULL);
}
