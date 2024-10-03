/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:06:00 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/21 21:15:40 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strmapi() applies the function 'f' t each ccharacter off the string 's'.
 * The same as ft_striteri() but allocating memory with malloc.
 * Returning a new string.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int				i;
	char						*p;

	if (!s || !f)
		return (0);
	p = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!p)
		return (0);
	i = ft_strlen(s);
	while (i--)
		p[i] = f(i, s[i]);
	return (p);
}
