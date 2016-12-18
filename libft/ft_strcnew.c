/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:15:58 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/26 14:16:02 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcnew(size_t size, char c)
{
	size_t		i;
	char		*alc;

	i = 0;
	if ((alc = (char *)malloc(size + 1)))
	{
		ft_memset(alc, c, size);
		alc[size] = '\0';
		return (alc);
	}
	return (NULL);
}
