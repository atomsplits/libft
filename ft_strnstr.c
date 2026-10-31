/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:20:50 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:21:08 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	j = 0;
	while (j < n && s1[j])
	{
		i = 0;
		while (j < n && s2[i] && s1[i] && s2[i] == s1[j])
		{
			i++;
			j++;
		}
		if (s2[i] == '\0')
			return ((char *)&s1[j - i]);
		j = j - i + 1;
	}
	return (0);
}
/*
int main() {
    char    *s1 = "ASDASD123";
    char    *s2 = "ASDJ";
    size_t  max = strlen(s2);

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}
*/
