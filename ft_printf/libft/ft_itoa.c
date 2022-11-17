/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:18:04 by almatos           #+#    #+#             */
/*   Updated: 2022/11/12 18:11:33 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_number(long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len_num;

	len_num = len_number(n);
	num = n;
	if (num < 0)
		num = num * -1;
	str = (char *)malloc(len_num + 1);
	if (!str)
		return (NULL);
	str[len_num] = '\0';
	while (len_num != 0)
	{
		str[len_num - 1] = num % 10 + '0';
		num = num / 10;
		len_num--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
