#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *));

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst)
        return (NULL);
    while (lst)
    {
        ft_lstiter(lst, f);
    }
}