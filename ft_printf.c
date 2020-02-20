/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:45:01 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/20 16:05:12 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	t_flags	flags;

	va_start(args, s);
	i = 0;
	flags.printed = 0;
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
	return (flags.printed);
}
