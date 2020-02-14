/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:45:43 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/02/14 16:54:01 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libftprintf.h"

int main()
{
	char a = 'l';
	char str[] = "esto es una cadena";

	ft_printf("char: %c, string: %s, numbers: %d, %i", a, "caca 2222", 43, -5);
}
