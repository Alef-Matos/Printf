/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:03:00 by almatos           #+#    #+#             */
/*   Updated: 2022/11/10 11:16:47 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;
	size_t	size_str;
	size_t	size_malloc;

	if (!s)
		return (NULL);
	index = 0;
	size_malloc = 0;
	size_str = ft_strlen(s);
	while ((start + index < size_str) && (size_malloc < len))
	{
		size_malloc++;
		index++;
	}
	index = 0;
	str = (char *) malloc (size_malloc + 1);
	if (!str)
		return (NULL);
	while ((start < size_str) && (index < len))
		str[index++] = s[start++];
	str[index] = 0;
	return (str);
}
