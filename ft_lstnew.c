#include"libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    new->content = content;
    new->next = NULL;
    return(new);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    t_list  *new;
    char    str[] = "abc";

    new = ft_lstnew((void *)str);
    printf("%s\n", (char *)(new->content));
    printf("%p\n", new->next);

    return 0;
}
