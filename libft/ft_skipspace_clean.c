/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipspace_clean.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:15:58 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/09 12:33:11 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipspace_clean(char *str)
{
	int		i;
	char	*res;
	int		sz;

	i = 0;
	sz = ft_strlen(str);
	while (*str && ft_isspace(*str))
	{
		str++;
		++i;
	}
	if (!(res = ft_strnew(sz - i)))
		return (NULL);
	i = 0;
	while (*str)
	{
		res[i++] = *str;
		str++;
	}
	return (res);
}
