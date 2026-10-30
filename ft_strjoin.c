/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:52:56 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/27 20:41:37 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p1;
	char	*res;

	p1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p1 == NULL)
		return (NULL);
	res = p1;
	p1 = ft_memcpy(p1, s1, ft_strlen(s1));
	p1 = ft_memcpy(p1 + ft_strlen(s1), s2, ft_strlen(s2));
	p1 = ft_memcpy(p1 + ft_strlen(s2), "\0", 1);
	return (res);
}
