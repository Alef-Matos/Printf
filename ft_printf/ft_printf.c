/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 09:01:08 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

int	ft_check_flags(char str, va_list prmts)
{
	if (str == '%')
		return (ft_printf_c('%'));
	if (str == 'c')
		return (ft_printf_c(va_arg(prmts, int)));
	else if (str == 's')
		return (ft_printf_s(va_arg(prmts, char *)));
	else if (str == 'd' || str == 'i')
		return (1);
	else if (str == 'u')
		return (1);
	else if (str == 'p')
		return (1);
	else if ((str == 'x') && (str == 'X'))
	{
		if (str == 'x')
			return (1);
		else
			return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	param;
	int		char_count;

	va_start(param, str);
	char_count = 0;
	while (*str)
	{
		if (*str != '%')
			char_count = char_count + ft_printf_c(*str);
		else
		{
			str++;
			char_count = char_count + ft_check_flags(*str, param);
		}
		str++;
	}
	va_end(param);
	return (char_count);
}
