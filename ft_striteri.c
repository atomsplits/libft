/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:19:17 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:19:27 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void(*f)(unsigned int, char*))
{
  int i;

  i = 0;
  if (s == NULL || f == NULL)
    return ;
  while (s[i] != '\0')
  {
    f(i, &s[i]);
    i++;
  }
}
