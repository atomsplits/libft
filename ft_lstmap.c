/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:15:40 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:15:40 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *new;
  t_list *head;

  head = NULL;
  while (lst)
  {
    new = ft_lstnew(f(lst->content));
    if (!new)
    {
      ft_lstclear(&head, del);
      return (NULL);
    }
    ft_lstadd_back(&head, new);
    lst = lst->next;
  }
  return (head);
}
