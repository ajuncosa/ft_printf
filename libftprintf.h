/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:44:28 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:10:41 by ajuncosa         ###   ########.fr       */
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
}				t_flags;

int		ft_printf(const char *s, ...);
void	ft_print_c(va_list args, t_flags *flags);
void	ft_print_s(va_list args, t_flags *flags);
void	ft_print_d(va_list args, t_flags *flags);
void	ft_print_p(va_list args, t_flags *flags);
void	ft_print_u(va_list args, t_flags *flags);
void	ft_print_x(va_list args, t_flags *flags);
void	ft_print_X(va_list args, t_flags *flags);
void	ft_print_hexa(size_t nbr, char whatcase);
void	ft_putnbr_unsigned(unsigned int n);

#endif
