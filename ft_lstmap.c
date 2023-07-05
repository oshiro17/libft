/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panti <panti@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:03:15 by panti             #+#    #+#             */
/*   Updated: 2023/07/05 00:07:15 by panti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*pos_first;

	pos_first = NULL;
	while (lst)
	{
		lst_new = ft_lstnew((*f)(lst->content));
		if (!lst_new)
		{
			ft_lstclear(&pos_first, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&pos_first, lst_new);
		lst = lst->next;
	}
	return (pos_first);
}
