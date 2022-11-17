/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:48:39 by almatos           #+#    #+#             */
/*   Updated: 2022/11/02 17:11:36 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			signal;
	long int	result;

	signal = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		result = (result * 10) + (*nptr++ - '0');
		if (result > 2147483648)
		{
			if (signal > 0)
				return (-1);
			return (0);
		}
	}
	return (result * signal);
}
