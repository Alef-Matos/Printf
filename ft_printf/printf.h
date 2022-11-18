/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:17:10 by almatos           #+#    #+#             */
/*   Updated: 2022/11/18 14:56:59 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *format_str, ...);
int			ft_check_flags(char str, va_list prmts);
int			ft_prt_s(char *s);
int			ft_prt_c(char c);
int			ft_prt_len(const char *s);
int			ft_prt_base(long long n, char *base, int base_size);
int			ft_utility(int flag, ...);
int			ft_prt_p(long long n, char *base, int base_size);

#endif