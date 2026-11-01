/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:21:32 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:21:34 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (start > ft_strlen(s))
	{
		sub = malloc(sizeof(char));
		*sub = '\0';
		return (sub);
	}
	if (len > (ft_strlen(s) - start + 1))
		sub = malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	else
		sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
