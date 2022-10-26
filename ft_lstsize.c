int ft_lstsize(t_list *lst)
{
    int i;
    
    if(!list)
        return(0);
    i = 0;
    while(lst->next)
    {
        lst = list->next;
        i++;
    }
    return(i);
}