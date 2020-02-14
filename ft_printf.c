/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:45:01 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/14 16:54:20 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_c(va_list args)
{
	char a;

	a = va_arg(args, int);
	write(1, &a, 1);
}

void	ft_print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
}

void	ft_print_d(va_list args)
{
	int	i;

	i = va_arg(args, int);
	ft_putnbr_fd(i, 1);
}

int		ft_printf(const char *s, ...)
{
	va_list	args;
	int i;

	va_start(args, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_print_c(args);
			else if (s[i] == 's')
				ft_print_s(args);
			else if (s[i] == 'd' || s[i] == 'i')
				ft_print_d(args);
		/*	else if (s[i] == 'p')
			else if (s[i] == 'u')
			else if (s[i] == 'x')
			else if (s[i] == 'X')
			else if (s[i] == '%')
			else
				// error?*/
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
