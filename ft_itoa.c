/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:14:36 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:14:39 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *pre_conv(int len)
{
  char *tmp;

  tmp = malloc(sizeof(char) * (len + 1));
  if (tmp == NULL)
    return (NULL);
  tmp[0] = '0';
  return (tmp);
}

int int_len(long nbr)
{
  int count;

  count = 0;
  if (nbr < 0)
  {
    count++;
    nbr = -nbr;
  }
  if (nbr == 0)
    count++;
  while (nbr != 0) 
  {
    nbr /= 10;
    count++;
  }
  return (count);
}

char *ft_itoa(int n)
{
  int len;
  int i;
  char *res;
  long nbr;

  nbr = n;
  len = int_len(nbr);
  res = pre_conv(len);
  if (res == NULL)
    return (NULL);
  if (nbr < 0)
    nbr = -nbr;
  i = len - 1;
  while (nbr != 0)
  {
    res[i] = ((nbr % 10) + 48);
    nbr /= 10;
    i--;
  }
  if (n < 0)
    res[0] = '-';
  res[len] = 0;
  return (res);
}
