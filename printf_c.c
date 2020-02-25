/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:05:15 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/25 15:37:06 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_c(va_list args, t_flags *flags)
{
	char	a;

	a = va_arg(args, int);
	if (flags->width != -1)
	{
		if (flags->dash == 1)
		{
			flags->printed += write(1, &a, 1);
			ft_print_filling(flags, 1);
		}
		else
		{
			ft_print_filling(flags, 1);
			flags->printed += write(1, &a, 1);
		}
	}
	else
		flags->printed += write(1, &a, 1);
}
