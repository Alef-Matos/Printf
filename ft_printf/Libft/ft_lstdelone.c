/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:52 by almatos           #+#    #+#             */
/*   Updated: 2022/11/10 15:48:29 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
/* ****************************************************************************/
/*                                                                            */
/*    Parametros  -   lst: O NODE a ser liberado.                             */
/*                    del: O endereco da funcao usada para excluir            */
/*					  o conteudo.                                             */
/*	                                                                          */
/*    Descricao   -   Toma como parâmetro um 'NODE' aplica a funcao 'DEL'     */
/*                    dada como parâmetro dentro do 'CONTENT' do NODE         */
/*					  e em seguida libera a memória do 'NODE' com o 'FREE'.   */
/*                                                                            */
/* ****************************************************************************/
