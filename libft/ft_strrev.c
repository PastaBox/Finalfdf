/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:19:41 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/07 11:29:20 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	c;

	if (str)
	{
		len = ft_strlen(str);
		i = -1;
		while (++i < --len)
		{
			c = str[i];
			str[i] = str[len];
			str[len] = c;
		}
		return (str);
	}
	return (NULL);
}
