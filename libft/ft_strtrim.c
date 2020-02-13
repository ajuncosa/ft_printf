/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuncosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:57:14 by ajuncosa          #+#    #+#             */
/*   Updated: 2020/01/17 14:14:43 by ajuncosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]) && start < ft_strlen(s1))
		start++;
	if (start == ft_strlen(s1))
	{
		return (ft_strdup(""));
	}
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	if (!(new = malloc(end - start + 2)))
		return (NULL);
	new = ft_substr(s1, start, end - start + 1);
	return (new);
}
