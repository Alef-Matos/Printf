/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:17:10 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 09:04:14 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "/nfs/homes/almatos/ft_printf/ft_printf/libft/libft.h"

int			ft_printf(const char *format_str, ...);
int			ft_check_flags(char str, va_list prmts);
int			ft_printf_s(char *s);
int			ft_printf_c(char c);

#endif