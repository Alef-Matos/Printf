/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:06:00 by almatos           #+#    #+#             */
/*   Updated: 2022/11/17 17:46:52 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	int		n;
	int		n2;
	char	teste;
	char	*str_teste;

	str_teste = "ola tudo bem?";
	teste = 'b';
	n = ft_printf("strings: %s\n", str_teste);
	n2 = printf("strings: %s\n", str_teste);
	printf("teste: %d\n", n);
	printf("teste: %d", n2);

	
//	ft_printf("teste: %d", ft_printf("12345"));
//	printf("strings: %%%s\n", str_teste);

//	ft_printf("a%%%%%%%%%%c", teste);
//	ft_printf("\n");
//	ft_printf("strings: %%%s\n", str_teste);

	return (0);
}
