/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:46:58 by almatos           #+#    #+#             */
/*   Updated: 2022/11/03 17:01:40 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	index;
	size_t	found;

	if (!str && !len)
		return (0);
	index = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[index] && index < len)
	{
		found = 0;
		while (str[index + found] == find[found] && (index + found) < len)
		{
			if (str[index + found] == '\0' && find[found] == '\0')
				return ((char *)&str[index]);
			found++;
		}
		if (find[found] == '\0')
			return ((char *)str + index);
		index++;
	}
	return (NULL);
}
