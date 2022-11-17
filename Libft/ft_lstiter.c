/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:37:47 by almatos           #+#    #+#             */
/*   Updated: 2022/11/12 17:50:49 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}

/* ***********************************************************************/
/*                                                                       */
/*    Parametros  -   lst: O endereço de um ponteiro para um nó.         */
/*					  f: O endereço da função usada para iterar na       */
/*                    lista.                                             */
/*	                                                                     */
/*    Descricao   -   Itera a lista 'lst' e aplica a função              */
/*					  'f' no content de cada 'node' até o fim da         */
/*					  lista.                        		     	     */
/*                                                                       */
/* ***********************************************************************/