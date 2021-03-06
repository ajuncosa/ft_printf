/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:44:28 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/27 17:40:48 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_flags
{
	short		zero;
	short		dash;
	int			width;
	int			precision;
	int			printed;
}				t_flags;

int				ft_printf(const char *s, ...);
void			ft_print_c(int a, t_flags *flags);
void			ft_print_s(va_list args, t_flags *flags);
void			ft_print_d(va_list args, t_flags *flags);
void			ft_print_p(va_list args, t_flags *flags);
void			ft_print_u(va_list args, t_flags *flags);
void			ft_print_x_lower(va_list args, t_flags *flags);
void			ft_print_x_upper(va_list args, t_flags *flags);
void			ft_print_hexa(size_t nbr, char whatcase, t_flags *flags);
void			ft_putnbr_unsigned(unsigned int n, t_flags *flags);
void			ft_choose_format(va_list args, char a, t_flags *flags);
void			ft_reset_flags(t_flags *flags);
void			ft_identify_flags(va_list args, const char *s,
		int i, t_flags *flags);
void			ft_print_filling(t_flags *flags, int len);
void			ft_putnbr_fd_edit(int n, int fd, t_flags *flags);
void			ft_putstr_fd_edit(char *s, int fd, t_flags *flags);

#endif
