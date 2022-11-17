/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:10:21 by almatos           #+#    #+#             */
/*   Updated: 2022/11/01 11:35:12 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_dup;
	size_t	size;

	size = ft_strlen(s) + 1;
	str_dup = (char *) malloc (size);
	if (!str_dup)
		return (NULL);
	return (ft_memcpy(str_dup, s, size));
}
