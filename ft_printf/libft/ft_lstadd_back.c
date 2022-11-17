/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:43:25 by almatos           #+#    #+#             */
/*   Updated: 2022/11/13 15:23:42 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_aux;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr_aux = ft_lstlast(*lst);
	ptr_aux->next = new;
}

/* **************************************************************/
/*                                                              */
/*    Parametros  -   lst: O endereço de um ponteiro para o     */
/*                    primeiro link de uma lista.               */
/*                    new: O endereço de um ponteiro para o     */
/*   				  nó a ser adicionado à lista.              */
/*	                                                            */
/*    Descricao   -   Adiciona o nó 'novo' no final da lista.   */
/*                                                              */
/* **************************************************************/