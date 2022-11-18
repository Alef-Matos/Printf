/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:06:00 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 15:06:51 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int		n;
	int		n2;
	char	teste;
	char	*str_teste;
	int		numero;

	numero = -100;
	str_teste = "ola tudo bem?";
	teste = 'b';
	n = ft_printf("strings: %p\n", &numero);
	n2 = printf("strings: %p\n", &numero);

	printf("teste: %d\n", n);
	printf("teste: %d", n2);

	return (0);
}
