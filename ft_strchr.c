/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:59:12 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:33:15 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr() function returns a pointer to the first occurrence 
 * of character 'c' in string 's'.
 * If 'c' is not found and 'c' is not the null terminator '\0', it returns NULL.
 * If 'c' is the null terminator '\0', it returns a pointer to the null
 * terminator at the end of 's'.
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == uc)
			return ((char *)&str[i]);
		i++;
	}
	if (uc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
