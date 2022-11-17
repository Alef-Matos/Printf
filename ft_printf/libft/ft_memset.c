/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:23:50 by almatos           #+#    #+#             */
/*   Updated: 2022/11/01 11:21:08 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str_tmp;

	str_tmp = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		str_tmp[index] = c;
		index++;
	}
	return (s);
}
