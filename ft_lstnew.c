/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:15:47 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:15:48 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *node;

  node = malloc(sizeof(t_list));
  if (node == NULL)
    return (NULL);
  node->content = content;
  node->next = NULL;
  return (node);
}
