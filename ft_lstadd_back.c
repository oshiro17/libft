/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panti <panti@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:18:43 by panti             #+#    #+#             */
/*   Updated: 2023/07/04 21:45:44 by panti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*second_last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	second_last = ft_lstlast(*lst);
	second_last->next = new;
}

// #include <stdio.h>
// //
// int main(void)
// {
// 	t_list	*node_first;
// 	t_list	*node_second;
// 	t_list	*node_third;

// 	node_first = ft_lstnew("1st");
// 	node_second = ft_lstnew("2nd");
// 	node_third = ft_lstnew("3rd");
// 	node_first->next = node_second;

// 	ft_lstadd_back(&node_first, node_third);
// 	while (node_first)
// 	{
// 		printf("\nnode->content : %s\n", (char *)node_first->content);
// 		node_first = node_first->next;
// 	}
// }
//gcc ft_lstadd_back.c ft_lstlast.c ft_lstnew.c 
