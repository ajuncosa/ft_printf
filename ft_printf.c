/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:45:01 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 16:51:18 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_choose_format(va_list args, char a, t_flags *flags)
{
	if (a == 'c')
		ft_print_c(args, flags);
	else if (a == 's')
		ft_print_s(args, flags);
	else if (a == 'd' || a == 'i')
		ft_print_d(args, flags);
	else if (a == 'p')
		ft_print_p(args, flags);
	else if (a == 'u')
		ft_print_u(args, flags);
	else if (a == 'x')
		ft_print_x(args, flags);
	else if (a == 'X')
		ft_print_X(args, flags);
	else if (a == '%')
		write(1, "%", 1);
	else
		write(1, &a, 1);
}

void	ft_reset_flags(t_flags *flags)
{
	flags->dash = -1;
	flags->zero = -1;
	flags->width = -1;
	flags->precision = -1;
}

void	ft_identify_flags(va_list args, const char *s, int i, t_flags *flags)
{
	while (s[i] == '-' || s[i] == '0')
	{
		if (s[i] == '-')
			flags->dash = 1;
		if (s[i] == '0' && flags->dash == -1)
			flags->zero = 1;
		i++;
	}
	if (s[i] == '*')
	{
		flags->width = va_arg(args, int);
		i++;
	}
	if (s[i] > '0' && s[i] <= '9')
	{
		flags->width = ft_atoi(&s[i]);
		while (s[i] >= '0' && s[i] <= '9')
			i++;
	}
	if (s[i] == '.')
	{
		i++;
		if (s[i] == '*')
			flags->precision = va_arg(args, int);
		else
			flags->precision = ft_atoi(&s[i]);
	}
}

int		ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	t_flags	flags;

	va_start(args, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			ft_reset_flags(&flags);
			i++;
			if (s[i] == '-' || (s[i] >= '0' && s[i] <= '9') || s[i] == '.' || s[i] == '*')
				ft_identify_flags(args, s, i, &flags);
			while (s[i] == '-' || (s[i] >= '0' && s[i] <= '9') || s[i] == '.' || s[i] == '*')
				i++;
			ft_choose_format(args, s[i], &flags);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
