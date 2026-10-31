/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:14:55 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:14:56 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *tmp;

  if (lst == NULL || del == NULL)
    return ;
  while(*lst != NULL)
  {
    tmp = (*lst)->next;
    ft_lstdelone(*lst, del);
    *lst = tmp;
  }
}
