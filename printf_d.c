/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:07:26 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/25 16:01:16 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_d(va_list args, t_flags *flags)
{
	int	n;
	int	num_len;
	int	true_len;
	int i;

	n = va_arg(args, int);
	num_len = 1;
	i = n;
	while (i / 10 != 0)
	{
		i = i / 10;
		num_len++;
	}
	true_len = num_len;
	if (flags->precision > num_len)
		true_len = flags->precision;
	if (n < 0)
		true_len++;
	if (flags->width != -1)
	{
		if (flags->dash == 1)
		{
			if (n < 0 && flags->precision > num_len)
			{
				n = -n;
				flags->printed += write(1, "-", 1);
			}
			i = 0;
			while (i++ < (flags->precision - num_len))
				flags->printed += write(1, "0", 1);
			ft_putnbr_fd_edit(n, 1, flags);
			if (true_len < flags->width)
				ft_print_filling(flags, true_len);
		}
		else
		{
			if (n < 0 && flags->zero == 1)
			{
				n = -n;
				flags->printed += write(1, "-", 1);
			}
			if (true_len < flags->width)
				ft_print_filling(flags, true_len);
			if (n < 0 && flags->precision > num_len)
			{
				n = -n;
				flags->printed += write(1, "-", 1);
			}
			i = 0;
			while (i++ < (flags->precision - num_len))
				flags->printed += write(1, "0", 1);
			ft_putnbr_fd_edit(n, 1, flags);
		}
	}
	else
	{
		if (n < 0 && flags->precision > num_len)
		{
			n = -n;
			flags->printed += write(1, "-", 1);
		}
		i = 0;
		while (i++ < (flags->precision - num_len))
			flags->printed += write(1, "0", 1);
		ft_putnbr_fd_edit(n, 1, flags);
	}
}
