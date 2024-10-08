/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:28:20 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:27:46 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strcmp() function compares the two strings s1 and s2.
 * The comparison is done using unsigned characters (to handle correctly the
 * ASCII values without being interpreted as negative).
 * The strncmp() function is similar to strcmp(), except it compares
 * only the first (at most) n bytes of s1 and s2.
 * Return an integer less than, equal, or greather than 0.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	if (n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i < (n - 1))
		i++;
	return ((int)(str1[i] - str2[i]));
}
