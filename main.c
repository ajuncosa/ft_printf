/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:45:43 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/27 17:18:06 by ajuncosa         ###   ########.fr       */
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

	static char	a01;
static unsigned char a02;
static short a03;
static unsigned short a04;
static int a05;
static unsigned int a06;
static long a07;
static unsigned long a08;
static long long a09;
static unsigned long long a10;
static char *a11;
static void *a12;

/*	ft_printf("\033[1;31mpruebas: \t%ñolo6, %ñ, \", \%, \n char: %c,\nstring: %s,\nnumbers: %d, %i,\npointer address: %p,\nunsigned ints: %u, %u,\nhex minuscula: %x,\nhex mayuscula: %X,\nporcentaje: %%", a, str, INT_MAX, num, ptr, UINT_MAX, -4, 1234, 1234);
	ft_printf("\033[1;30m\n\n**********ORIGINAL*********");
	printf("\033[1;32m\n\npruebas: \t%ñolo6, %ñ, \", \%, \n char: %c,\nstring: %s,\nnumbers: %d, %i,\npointer address: %p,\nunsigned ints: %u, %u,\nhex minuscula: %x,\nhex mayuscula: %X,\nporcentaje: %%", a, str, INT_MAX, num, ptr, UINT_MAX, -4, 1234, 1234);
	ft_printf("\n\033[1;31m%25d", 1234);
	printf("\033[1;32m\n%25d", 1234);*/
	printf("return: %d\n______\n", printf("%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));
	printf("return: %d", ft_printf("%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));
}
