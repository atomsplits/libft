/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:31:54 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/27 11:35:03 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;

	l1 = ft_strlen(dest);
	l2 = ft_strlen(src);
	i = 0;
	if (l1 >= size)
		return (size + l2);
	while (i < size - l1 - 1 && src[i])
	{
		dest[l1 + i] = src[i];
		i++;
	}
	dest[l1 + i] = '\0';
	return (l1 + l2);
}
