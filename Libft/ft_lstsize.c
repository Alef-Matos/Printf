/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:31:50 by almatos           #+#    #+#             */
/*   Updated: 2022/11/10 11:58:10 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != 0)
	{
		lst = lst->next;
		len ++;
	}
	return (len);
}

/* **********************************************************/
/*                                                          */
/*    Parametros  -   lst: O início da Lista.               */
/*	  Retorno     -	  O comprimento da lista                */
/*    Descricao   -   Conta o número de nós em uma lista    */
/*                                                          */
/* **********************************************************/