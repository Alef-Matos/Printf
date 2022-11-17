/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:48:30 by almatos           #+#    #+#             */
/*   Updated: 2022/11/01 11:29:09 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;

	str = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)(s + index));
		index++;
	}
	return (0);
}
