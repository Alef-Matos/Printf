/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:46:50 by almatos           #+#    #+#             */
/*   Updated: 2022/11/15 14:04:56 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = strlen((char *)s);
	while (s[index] != (unsigned char)c && index > 0)
		index--;
	if (s[index] == (unsigned char)c)
		return ((char *) &s[index]);
	return (NULL);
}
