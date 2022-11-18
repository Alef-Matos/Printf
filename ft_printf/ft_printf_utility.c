/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utility.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:00:24 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 16:05:28 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_put_s(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		write(1, s++, 1);
		len++;
	}
	return (len);
}

int	ft_put_nb(long long n, char *base, int base_size)
{
	int				c_count;

	c_count = 0;
	if (n < 0)
	{
		ft_put_c('-');
		n = n * -1;
		c_count++;
	}
	if (n / base_size > 0)
		c_count = c_count + ft_put_nb(n / base_size, base, base_size);
	ft_put_c(base[n % base_size]);
	c_count++;
	return (c_count);
}

int	ft_put_np(unsigned long long n, char *base, int base_size, int frist_exec)
{
	int	c_count;

	c_count = 0;
	if (!n && frist_exec == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (frist_exec == 0)
	{
		ft_put_s("0x");
		c_count = c_count + 2;
	}
	if (n / base_size > 0)
		c_count = c_count + ft_put_np(n / base_size, base, base_size, 1);
	ft_put_c(base[n % base_size]);
	c_count++;
	return (c_count);
}
