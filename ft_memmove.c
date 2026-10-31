/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:17:12 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:17:12 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*cd;
	char	*csrc;

	cd = (char *)dest;
	csrc = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (count--)
			*cd++ = *csrc++;
	}
	else if (dest > src)
	{
		cd += count - 1;
		csrc += count - 1;
		while (count--)
			*cd-- = *csrc--;
	}
	return (dest);
}
