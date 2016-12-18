/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:26:52 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 15:36:59 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*cpy;
	t_list		*tmp;

	cpy = *alst;
	while (cpy)
	{
		tmp = cpy->next;
		del(cpy->content, cpy->content_size);
		free(cpy);
		cpy = tmp;
	}
	*alst = NULL;
}
