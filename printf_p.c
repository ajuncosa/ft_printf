/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:08:14 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:08:55 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_p(va_list args, t_flags *flags)
{
    void    *ptr;
    size_t  address;

    ptr = va_arg(args, void *);
    address = (size_t)ptr;
    write(1, "0x", 2);
    ft_print_hexa(address, 'l');
}
