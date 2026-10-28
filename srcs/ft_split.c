/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:11:05 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/28 17:11:22 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count(const char *str, char c)
{
  int c;
  int x;

  c = 0;
  x = 0;
  while (*str)
  {
    if (*str != c && x == 0)
    {
      x = 1;
      c++;
    }
    else if (*str == c)
      x = 0;
    str++;
  }
  return (c);
}

static char *fill(const char *str, int start, int end)
{
  char *word;
  int i;

  i = 0;
  word = malloc(sizeof(char) * (end - start + 1));
  if (word == NULL)
    return (NULL);
  while (start < end)
  {
    word[i] = str[start];
    i++;
    start++;
  }
  word[i] = 0;
  return (word);
}

void *ft_free(char **strs, int count)
{
  int i;

  i = 0;
  while (i < count)
  {
    free(strs[i]);
    i++;
  }
  free(strs);
  return (NULL);
}

void init_vars(size_t *i, int *j, int *s_word)
{
  *i = 0;
  *j = 0;
  *s_word = -1;
}

char	**ft_split(char const *s, char c)
{
  char **res;
  size_t i;
  int j;
  int s_word;

  init_vars(&i, &j, &s_word);
  res = ft_calloc((count(s, c) + 1), sizeof(char *));
  if (res == NULL)
    return (NULL);
  while (i <= ft_strlen(s))
  {
    if (s[i] != c && s_word < 0)
      s_word = i;
    else if ((s[i] == c || i == ft_strlen(s)) && s_word > 0)
    {
      res[j] = fill(s, s_word, i);
      if (!res[j])
        return (ft_free(res, j));
      s_word = -1;
      j++;
    }
    i++;
  }
  return (res);
}
