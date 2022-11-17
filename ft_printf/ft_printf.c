/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/17 18:32:49 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

static int	ft_check_flags(char str, va_list prmts)
{
	if (str == '%')
		return (ft_printf_c('%'));
	if (str == 'c')
		return (ft_printf_c(va_arg(prmts, int)));
	else if (str == 's')
		return (ft_printf_s(va_arg(prmts, char *)));
	else if (str == 'd')
		return (1);
	else if (str == 'i')
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
	va_list	prmts;
	int		char_count;

	va_start(prmts, str);
	char_count = 0;
	while (*str)
	{
		if (*str != '%')
		{
			char_count++;
			ft_printf_c(*str);
		}	
		else
		{
			str++;
			char_count = char_count + ft_check_flags(*str, prmts);
		}
		str++;
	}
	va_end(prmts);
	return (char_count);
}
