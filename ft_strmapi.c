/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:20:29 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:20:35 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *str;
  unsigned int i;

  if (s == NULL || f == NULL)
    return (NULL);
  str = malloc(sizeof(char) * (ft_strlen(s) + 1));
  if (str == NULL)
    return (NULL);
  i = 0;
  while (s[i] != '\0')
  {
    str[i] = f(i, s[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}
