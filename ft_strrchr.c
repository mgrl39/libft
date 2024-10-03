/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:59:12 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:34:04 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ft_strrchr() function returns a pointer to the last
 * occurrence of character 'c' in string 's'.
 * If 'c' is not found, it returns NULL.
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	uc;
	char			*res;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	res = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == uc)
			res = (char *)&str[i];
		i++;
	}
	if (uc == '\0')
		res = (char *)&str[i];
	return (res);
}
