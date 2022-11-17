/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:57:40 by almatos           #+#    #+#             */
/*   Updated: 2022/11/03 17:13:02 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t	len_s1;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 != 0 && ft_strchr(set, s1[len_s1]))
		len_s1--;
	str = ft_substr(s1, 0, len_s1 + 1);
	return (str);
}
