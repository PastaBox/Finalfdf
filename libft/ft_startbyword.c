/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startbyword.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:39:06 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/06 19:18:27 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_startbyword(const char *str, const char *word)
{
	int		len;
	int		i;
	int		found;

	len = ft_strlen(word);
	i = -1;
	found = 1;
	if (len == 0 || (int)ft_strlen(str) < len)
		return (0);
	while (str[++i] && i < len)
		if (str[i] != word[i])
		{
			found = 0;
			break ;
		}
	return (found);
}
