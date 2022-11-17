/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:38:59 by almatos           #+#    #+#             */
/*   Updated: 2022/11/13 15:24:23 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr_aux;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr_aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr_aux;
	}
}
/* ****************************************************************************/
/*                                                                            */
/*    Parametros  -   lst: O endereco de um ponteiro para um 'NODE'.          */
/*                    del: O endereco da funcao usada para excluir            */
/*					  o conteudo.                                             */
/*	                                                                          */
/*    Descricao   -   Exclui '*lst'(node dado como parâmetro ) e os           */
/*					  próximos node's até chegar ao fim da lista liberando    */
/*					  toda a memoria de cada 'node'(free), usando a funcao    */
/*					  'dell'(dada como parâmetro), o ponteiro para a lista    */
/*					  deve ser definido como 'nulo'. 						  */
/*                                                                            */
/* ****************************************************************************/
