#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    new->content = content;
    new->next = NULL;
    return(new);
}

t_list *ft_lstlast(t_list *lst)
{
    while (lst && lst->next)
        lst = lst->next;
    return (lst);
}

// int main (void)

// {
//     t_list  *node_first;
//     t_list  *node_second;
//     t_list  *node_third;
//     // char    str[] = "abc";
//     // char    str2[] = "def";

//     node_first = ft_lstnew("abc");
//     node_second = ft_lstnew("def");
//     node_third = ft_lstnew("hoae");
//     node_first->next = node_second;
//     node_second->next = node_third;
//     printf("%s", (char *)(ft_lstlast(node_first))->content);
//     return(0);
//     }
