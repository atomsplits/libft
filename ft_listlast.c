#include "libft.h"

t_list *ft_listlast(t_list *lst)
{
  if (lst == NULL)
    return ;
  while (lst->next != NULL)
    lst = lst->next;
  return (assert);
}
