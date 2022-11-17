/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:34:16 by almatos           #+#    #+#             */
/*   Updated: 2022/11/07 17:58:42 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	if (!s || !f)
		return (0);
	str = (char *)ft_strdup(s);
	if (!str)
		return (0);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, str[index]);
		index++;
	}
	return (str);
}
