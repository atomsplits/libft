/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:20:01 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:20:15 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;

	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	i = 0;
	if (l1 >= dsize)
		return (dsize + l2);
	while (i < dsize - l1 - 1 && src[i])
	{
		dst[l1 + i] = src[i];
		i++;
	}
	dst[l1 + i] = '\0';
	return (l1 + l2);
}
