/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 18:41:52 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flags(char str, va_list prm)
{
	if (str == '%')
		return (ft_put_c('%'));
	else if (str == 'c')
		return (ft_put_c(va_arg(prm, int)));
	else if (str == 's')
		return (ft_put_s(va_arg(prm, char *)));
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
			c_count += ft_put_c(*str);
		else
		{
			str++;
			c_count += ft_check_flags(*str, param);
		}
		str++;
	}
	va_end(param);
	return (c_count);
}
