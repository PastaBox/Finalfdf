/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:20:35 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 19:53:01 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;

	i = 0;
	if (!ft_strlen(little))
		return ((char *)big);
	while (*big && i < len)
	{
		if (((len - i) >= ft_strlen(little)) && (ft_startbyword(big, little)))
			return ((char *)big);
		++big;
		++i;
	}
	return (NULL);
}
