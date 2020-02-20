/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:32:36 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/20 17:20:37 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hexa(size_t nbr, char whatcase)
{
	char	b;

	if (nbr > 16)
	{
		ft_print_hexa(nbr / 16, whatcase);
	}
	b = nbr % 16;
	if (b > 9)
	{
		if (whatcase == 'l')
			b = b + 87;
		if (whatcase == 'u')
			b = b + 55;
	}
	else
		b = b + '0';
	write(1, &b, 1);
}

void	ft_putnbr_unsigned(unsigned int n)
{
	char number;

	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10);
	}
	number = (n % 10) + '0';
	write(1, &number, 1);
}

void	ft_print_filling(t_flags *flags, int len)
{
	int i;

	i = 0;
	if (flags->zero == 1)
		while (i++ < (flags->width - len))
		{
			write(1, "0", 1);
			flags->printed++;
		}
	else
		while (i++ < (flags->width - len))
		{
			write(1, " ", 1);
			flags->printed++;
		}
}
