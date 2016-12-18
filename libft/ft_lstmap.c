/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:34:27 by thgeorge          #+#    #+#             */
/*   Updated: 2016/11/12 18:27:05 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*new;
	t_list		*cpy;

	cpy = NULL;
	new = NULL;
	while (lst)
	{
		if (!(tmp = (t_list *)malloc(sizeof(t_list) * 1)))
			return (NULL);
		tmp = f(lst);
		if (!new)
		{
			new = ft_lstnew(tmp->content, tmp->content_size);
			cpy = new;
		}
		else
		{
			new->next = ft_lstnew(tmp->content, tmp->content_size);
			new = new->next;
		}
		lst = lst->next;
	}
	free(tmp);
	return (cpy);
}
