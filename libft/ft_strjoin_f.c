/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 13:58:12 by thgeorge          #+#    #+#             */
/*   Updated: 2016/12/15 14:44:24 by fciprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_f(char const *s1, char const *s2)
{
	char	*cp1;
	char	*cp2;
	char	*str;

	cp1 = (char *)s1;
	cp2 = (char *)s2;
	str = ft_strjoin(s1, s2);
	ft_strdel(&cp1);
	ft_strdel(&cp2);
	return (str);
}
