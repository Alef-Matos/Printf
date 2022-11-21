/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/21 14:54:23 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *s, int len)
{
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
		c_count += write(1, "-", 1);
		n *= -1;
	}
	if (n / b_size > 0)
		c_count += ft_put_b(n / b_size, b, b_size, 0);
	c_count += write(1, &b[n % b_size], 1);
	return (c_count);
}

int	ft_put_p(unsigned long long n, char *b, int b_size, int frist_exec)
{
	int	c_count;

	c_count = 0;
	if (!n && frist_exec == 0)
		return (write(1, "(nil)", 5));
	if (frist_exec == 0)
		c_count += ft_put_s("0x", 0);
	if (n / b_size > 0)
		c_count += ft_put_p(n / b_size, b, b_size, 1);
	c_count += write(1, &b[n % b_size], 1);
	return (c_count);
}

int	ft_check_flags(char str, va_list prm, int c)
{
	if (str == '%')
		return (write(1, "%", 1));
	else if (str == 'c')
	{
		c = va_arg(prm, int);
		return (write(1, &c, 1));
	}
	else if (str == 's')
		return (ft_put_s(va_arg(prm, char *), 0));
	else if (str == 'd' || str == 'i')
		return (ft_put_b(va_arg(prm, int), "0123456789", 10, 0));
	else if (str == 'u')
		return (ft_put_b(va_arg(prm, unsigned int), "0123456789", 10, 0));
	else if (str == 'p')
		return (ft_put_p(va_arg(prm, long int), "0123456789abcdef", 16, 0));
	else if (str == 'x')
		return (ft_put_b(va_arg(prm, unsigned int), "0123456789abcdef", 16, 0));
	else if (str == 'X')
		return (ft_put_b(va_arg(prm, unsigned int), "0123456789ABCDEF", 16, 0));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	param;
	int		c_count;

	va_start(param, str);
	c_count = 0;
	while (*str)
	{
		if (*str != '%')
			c_count += write(1, str, 1);
		else
		{
			str++;
			c_count += ft_check_flags(*str, param, 0);
		}
		str++;
	}
	va_end(param);
	return (c_count);
}
