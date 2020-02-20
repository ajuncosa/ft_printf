/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:06:18 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:06:50 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_s(va_list args, t_flags *flags)
{
    char    *str;

    str = va_arg(args, char *);
    ft_putstr_fd(str, 1);
}
