/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:55:31 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 08:53:13 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*alc;

	i = 0;
	if ((alc = (char *)malloc(size + 1)))
	{
		ft_memset(alc, '\0', (size + 1));
		return (alc);
	}
	return (NULL);
}
