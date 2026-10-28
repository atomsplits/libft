/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:27:47 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/27 20:36:44 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*temp;
	size_t	sublen;

	if (!s || start > ft_strlen(s))
	{
		sub = malloc(sizeof(char));
		if (sub == NULL)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	s += start;
	sublen = ft_strlen(s);
	if (sublen > len)
		sublen = len;
	sub = malloc(sizeof(char) * (sublen + 1));
	if (sub == NULL)
		return (NULL);
	temp = sub;
	while (*s && sublen--)
		*sub = *s;
	*sub = '\0';
	return (temp);
}
