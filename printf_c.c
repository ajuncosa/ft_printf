/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:05:15 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/19 17:00:48 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_c(va_list args, t_flags *flags)
{
    char    a;
    int     i;

    i = 1;
    a = va_arg(args, int);

	if (flags->zero == 1)
	{
		while (i < flags->width)
		{
			write(1, "0", 1);
			i++;
		}


   /* if (flags->width != -1)
    {
        if (flags->dash == -1)
        {
            while (i < flags->width)
            {
                if (flags->zero == -1)
                    write(1, " ", 1);
                else
                    write(1, "0", 1);
                i++;
            }
            write(1, &a, 1);
        }
        else
        {
            write(1, &a, 1);
            while (i < flags->width)
            {
                write(1, " ", 1);
                i++;
            }
        }
    }*/
}
