/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:08:59 by almatos           #+#    #+#             */
/*   Updated: 2022/11/15 15:13:03 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	while (len -1 > 0)
	{
	lst = lst->next;
	len--;
	}
	return (lst);
}

/* **********************************************************/
/*                                                          */
/*    Parametros  -   lst: O início da Lista.               */
/*	  Retorno     -	  Ultimo NODE da lista                  */
/*    Descricao   -   Retorna o ultimo NODE da lista        */
/*                                                          */
/* **********************************************************/