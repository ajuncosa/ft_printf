/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:05:15 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/20 17:16:48 by ajuncosa         ###   ########.fr       */
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
			write(1, &a, 1);
			flags->printed++;
			ft_print_filling(flags, 1);
		}
		else
		{
			ft_print_filling(flags, 1);
			write(1, &a, 1);
			flags->printed++;
		}
	}
	else
		write(1, &a, 1);
}
