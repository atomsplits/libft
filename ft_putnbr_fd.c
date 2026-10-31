/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:17:48 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:17:49 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  long num;

  num = n;
  if (num < 0)
  {
    ft_putchar_fd('-', fd);
    num *= -1;
  }
  
  if (num >= 0 && num < 10)
    ft_putchar_fd(num + '0', fd);
  else
  {
    ft_putnbr_fd(num / 10, fd);
    ft_putnbr_fd(num % 10, fd);
  }
}
