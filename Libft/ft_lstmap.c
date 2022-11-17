/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:28:04 by almatos           #+#    #+#             */
/*   Updated: 2022/11/15 11:27:52 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *********************************************************************/
/*                                                                     */
/*    Parametros  -   lst: O endereço de um ponteiro para um nó.       */
/*					  f: O endereço da função usada para iterar        */
/*					  na lista.                                        */
/*					  del: O endereço da função usada para excluir     */
/*					  o conteúdo de um nó, se necessário.              */
/*                                                                     */
/*	  Retorno     -	  A nova lista. NULL se a alocação falhar.         */
/*                                                                     */
/*    Descricao   -   Itera a lista 'lst' e aplica a função 'f'        */
/*					  no conteúdo de cada nó.                          */
/*					  Cria uma nova lista resultante das sucessivas    */
/*					  aplicações de a função 'f'. A função 'del' é     */
/*					  usada para excluir o conteúdo de um NODE, se     */
/*					  necessário.                                      */
/*                                                                     */
/* *********************************************************************/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*ptr_aux;

	lstnew = NULL;
	while (lst)
	{
		ptr_aux = ft_lstnew((f)(lst->content));
		if (!lst)
			ft_lstclear(&ptr_aux, del);
		ft_lstadd_back(&lstnew, ptr_aux);
		lst = lst->next;
	}
	return (lstnew);
}
