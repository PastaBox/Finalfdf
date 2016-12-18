/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:25:43 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 18:24:14 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*cpy;
	t_list		*tmp;

	cpy = lst;
	while (cpy)
	{
		tmp = cpy->next;
		f(cpy);
		cpy = tmp;
	}
}
