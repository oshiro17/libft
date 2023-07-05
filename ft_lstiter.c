/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panti <panti@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:47:00 by panti             #+#    #+#             */
/*   Updated: 2023/07/04 22:01:53 by panti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (f && lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include "stdio.h"
// void print_content(void *content);
// int	main(void)
// {
// 	t_list *node_first;
// 	t_list *node_second;
// 	t_list	*node_third;
// 	node_first = ft_lstnew("1st");
// 	node_second = ft_lstnew("2nd");
// 	node_third = ft_lstnew("3rd");
// 	node_first->next = node_second;
// 	ft_lstadd_back(&node_first, node_third);
// 	void (*print_func)(void *) = &print_content;
// 	ft_lstiter(node_first, print_func);
// 	return 0;
// }
// //gcc ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstiter.c
// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }