#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *node;

  if (node == NULL)
    return (NULL);
  node = malloc(sizeof(t_list));
  node->content = content;
  node->next = NULL;
  return (node);
}
