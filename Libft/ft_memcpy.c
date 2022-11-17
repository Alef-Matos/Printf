/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:48:13 by almatos           #+#    #+#             */
/*   Updated: 2022/11/01 11:15:56 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	if (!dst && !src)
		return (NULL);
	index = 0;
	while (index < n)
		*(unsigned char *)(dst + index++) = *(unsigned char *)(src++);
	return (dst);
}
