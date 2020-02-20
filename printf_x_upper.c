/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:12:49 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:13:05 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_X(va_list args, t_flags *flags)
{
    unsigned int    i;

    i = va_arg(args, unsigned int);
    ft_print_hexa(i, 'u');
}