/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:18:06 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:18:06 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free(char **lst)
{
	int	i;

	if (!lst)
		return ;
	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}

static bool	ft_jumpchar(const char **s, char c)
{
	while (*(*s) == c)
		(*s)++;
	return (true);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s && ft_jumpchar(&s, c) && *s)
	{
		word_len = ft_strchr(s, c) - s;
		if (!ft_strchr(s, c))
			word_len = ft_strlen(s);
		lst[i] = ft_substr(s, 0, word_len);
		if (!lst[i++])
			return (ft_free(lst), NULL);
		s += word_len;
	}
	lst[i] = NULL;
	return (lst);
}

//#include <stdio.h>

/*
int main() {
  int i = 0;
  char string[] = "black";
  char **strings = ft_split(string, ',');

  //printf(string);
  //printf(ft_split(string, ',')[0]);
  while (strings[i]) {
    printf("%s\n",  strings[i]);
    i++;
  }
}
*/
