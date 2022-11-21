/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:00:24 by almatos           #+#    #+#             */
/*   Updated: 2022/11/21 13:21:39 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(char c)
{
	return (write(1, &c, 1));
}

int	ft_put_s(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[len])
		write(1, &s[len++], 1);
	return (len);
}

int	ft_put_b(long long n, char *b, int b_size, int c_count)
{
	if (n < 0)
	{
		c_count += ft_put_c('-');
		n *= -1;
	}
	if (n / b_size > 0)
		c_count += ft_put_b(n / b_size, b, b_size, 0);
	c_count += ft_put_c(b[n % b_size]);
	return (c_count);
}

int	ft_put_p(unsigned long long n, char *b, int b_size, int frist_exec)
{
	int	c_count;

	c_count = 0;
	if (!n && frist_exec == 0)
		return (write(1, "(nil)", 5));
	if (frist_exec == 0)
		c_count += ft_put_s("0x");
	if (n / b_size > 0)
		c_count += ft_put_p(n / b_size, b, b_size, 1);
	ft_put_c(b[n % b_size]);
	c_count++;
	return (c_count);
}
