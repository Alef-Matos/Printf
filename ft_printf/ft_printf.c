/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:53 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 16:04:47 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flags(char str, va_list param)
{
	if (str == '%')
		return (ft_put_c('%'));
	else if (str == 'c')
		return (ft_put_c(va_arg(param, int)));
	else if (str == 's')
		return (ft_put_s(va_arg(param, char *)));
	else if (str == 'd' || str == 'i')
		return (ft_put_nb(va_arg(param, int), "0123456789", 10));
	else if (str == 'u')
		return (ft_put_nb(va_arg(param, unsigned int), "0123456789", 10));
	else if (str == 'p')
		return (ft_put_np(va_arg(param, long int), "0123456789abcdef", 16, 0));
	else if (str == 'x')
		return (ft_put_nb(va_arg(param, unsigned int), "0123456789abcdef", 16));
	else if (str == 'X')
		return (ft_put_nb(va_arg(param, unsigned int), "0123456789ABCDEF", 16));
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
			c_count = c_count + ft_put_c(*str);
		else
		{
			str++;
			c_count = c_count + ft_check_flags(*str, param);
		}
		str++;
	}
	va_end(param);
	return (c_count);
}

/* 
### USANDO FT_PUT_C ####
• %% imprimir um sinal de porcentagem. 
• %c imprime um único caractere.

### USANDO FT_PUT_S ####
• %s imprime uma string.

### USANDO FT_PUT_NP ####
• %p O argumento void * ponteiro é impresso em hexadecimal.

### USANDO FT_PUT_NB ####
• %d e %i imprime um número decimal / imprime um inteiro (base 10).

• %u imprime um número decimal sem sinal (base 10).

• %x imprime um número em hexadecimal (base 16).
*/