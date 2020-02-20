/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:13:14 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:13:34 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_u(va_list args, t_flags *flags)
{
    unsigned int    i;

    i = va_arg(args, unsigned int);
    ft_putnbr_unsigned(i);
}
