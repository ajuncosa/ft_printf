/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:45:43 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/20 17:09:21 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libftprintf.h"
#include <stdio.h>

int main()
{
	char a = 'l';
	char str[] = "esto es una cadena";
	int num = INT_MIN;
	int *ptr = &num;

/*	ft_printf("\033[1;31mpruebas: \t%ñolo6, %ñ, \", \%, \n char: %c,\nstring: %s,\nnumbers: %d, %i,\npointer address: %p,\nunsigned ints: %u, %u,\nhex minuscula: %x,\nhex mayuscula: %X,\nporcentaje: %%", a, str, INT_MAX, num, ptr, UINT_MAX, -4, 1234, 1234);
	ft_printf("\033[1;30m\n\n**********ORIGINAL*********");
	printf("\033[1;32m\n\npruebas: \t%ñolo6, %ñ, \", \%, \n char: %c,\nstring: %s,\nnumbers: %d, %i,\npointer address: %p,\nunsigned ints: %u, %u,\nhex minuscula: %x,\nhex mayuscula: %X,\nporcentaje: %%", a, str, INT_MAX, num, ptr, UINT_MAX, -4, 1234, 1234);
	ft_printf("\n\033[1;31m%25d", 1234);
	printf("\033[1;32m\n%25d", 1234);*/

	printf("hello, %5s.\n", str);
	ft_printf("hello, %5s.\n", str);

}
