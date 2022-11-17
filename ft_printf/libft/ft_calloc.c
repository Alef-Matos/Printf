/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:17:31 by almatos           #+#    #+#             */
/*   Updated: 2022/11/08 10:11:19 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sizet;
	void	*tmp;

	sizet = nmemb * size;
	tmp = (void *) malloc (sizet);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, sizet);
	return (tmp);
}
/* 	if (sizet / nmemb != size)
		return (NULL);*/
