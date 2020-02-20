/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:06:18 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/20 17:17:32 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_print_string(char *str, t_flags *flags, int len)
{
	if (flags->width != -1)
	{
		if (flags->dash == 1)
		{
			ft_putstr_fd(str, 1);
			if (len < flags->width)
				ft_print_filling(flags, len);
		}
		else
		{
			if (len < flags->width)
				ft_print_filling(flags, len);
			ft_putstr_fd(str, 1);
		}
	}
	else
		ft_putstr_fd(str, 1);
}

void		ft_print_s(va_list args, t_flags *flags)
{
	char	*str;
	int		len;

	str = ft_strdup(va_arg(args, char *));
	if (str == NULL)
		str = ft_strdup("(null)");
	if (flags->precision != -1)
		str = ft_substr(str, 0, flags->precision);
	len = ft_strlen(str);
	ft_print_string(str, flags, len);
	free(str);
}
