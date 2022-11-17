/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:47:50 by almatos           #+#    #+#             */
/*   Updated: 2022/11/07 17:25:39 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cw(char const *s, char c)
{
	size_t	cont_words;

	cont_words = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			cont_words++;
		s++;
	}
	return (cont_words);
}

static char	**str_malloc(char const *s, char c)
{
	char	**split;
	int		count_words;

	count_words = cw(s, c);
	split = malloc((count_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[count_words] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		index;
	int		posi;

	if (!s)
		return (NULL);
	posi = 0;
	index = 0;
	split = str_malloc(s, c);
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (s[index] != c && s[index])
			index++;
		if (*s)
			split[posi] = ft_substr(s, 0, index);
		posi++;
		s = s + index;
		index = 0;
	}
	return (split);
}
