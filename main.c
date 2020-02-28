/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:45:43 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/28 16:24:52 by ajuncosa         ###   ########.fr       */
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
	printf("return: %d\n______\n", printf("%15.10u|\n", 1));
	printf("return: %d", ft_printf("%15.10u|\n", 1));
/*
	printf("\033[1;31m %d |",    printf("1 %% %%%% %%%%%% %c %c %c %c%% 0%c 0%c %c %c %s %s%% %s %s %i %i %i %i %i %i %i %i %i %i %d %d %d %d %d %d %d %d %d %d %u %u %u %u %u %u %u %x %x %x %x %x %x %x %x %x %x %X %X %X %X %X %X %X %X %X %X %p %p %p %p %p %p", '1', -207, 256 + 48, '3', 0, -129, 128, '\0', "hello", "hello3", "", "1", 0, -1, -42, 1, 2, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0 , -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0, -1, 1, 42, UINT_MAX, UINT_MAX + 1, 1000, 0, -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0, -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, (void*)1, (void*)-1, (void*)42, (void*)1000,  (void*)ULONG_MAX, (void*)ULONG_MAX + 1));
	print("\n");
printf("\033[1;32m %d\n", ft_printf("1 %% %%%% %%%%%% %c %c %c %c%% 0%c 0%c %c %c %s %s%% %s %s %i %i %i %i %i %i %i %i %i %i %d %d %d %d %d %d %d %d %d %d %u %u %u %u %u %u %u %x %x %x %x %x %x %x %x %x %x %X %X %X %X %X %X %X %X %X %X %p %p %p %p %p %p", '1', -207, 256 + 48, '3', 0, -129, 128, '\0', "hello", "hello3", "", "1", 0, -1, -42, 1, 2, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0 , -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0, -1, 1, 42, UINT_MAX, UINT_MAX + 1, 1000, 0, -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, 0, -1, -42, 1, 42, INT_MAX, INT_MAX + 1, INT_MIN, 1000, -1000, (void*)1, (void*)-1, (void*)42, (void*)1000,  (void*)ULONG_MAX, (void*)ULONG_MAX + 1));
*/
}
