/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:48:21 by almatos           #+#    #+#             */
/*   Updated: 2022/11/01 11:19:45 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					index;
	unsigned char			*str_1;
	unsigned char			*str_2;

	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (str_1[index] != str_2[index])
			return (str_1[index] - str_2[index]);
		index++;
	}
	return (0);
}
