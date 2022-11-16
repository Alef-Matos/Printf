/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/16 18:51:49 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

static int	check_flags(const char *frmt_str, va_list prmts)
{
	if (frmt_str[1] == '%')
		return (ft_putchar(frmt_str[1]));
	else if (frmt_str[1] == 'c') // Caractere
		return (ft_putchar(va_arg(prmts, int)));
	else if (frmt_str[1] == 's') // String
		return (0);
	else if (frmt_str[1] == 'd') // Decimal base 10
		return (0);
	else if (frmt_str[1] == 'i') // Inteiro base 10
		return (0);
	else if (frmt_str[1] == 'u') // Decimal Sem sinal
		return (0);
	else if (frmt_str[1] == 'p') // Pointer
		return (0);
	else if ((frmt_str[1] == 'x') && (frmt_str[1] == 'X')) // Hexadecimal
	{
		if (frmt_str[1] == 'x')
			return (0);
		else 
			return (0);
	}
	else
		return (0);
}

int	ft_printf(const char *format_str, ...)
{
	va_list	parameters;
	int		n_of_char;

	va_start(parameters, format_str);
	n_of_char = 0;
	while (*format_str)
	{
		if (*format_str == '%' && ft_strchr("cspdiuxX%", format_str[1]))
		{
			n_of_char = check_flags(format_str++, parameters);
			format_str++;
		}	
		n_of_char += ft_putchar(* (char *)format_str);
		format_str++;
	}
	va_end(parameters);
	return (n_of_char);
}
