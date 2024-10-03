/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:36:05 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:31:28 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strtrim function trims all characters 
 * in 'set' from the beginning and end of 's1', returning the trimmed string.
 * Memory for the new string is allocated with malloc(3).
 * Returns NULL if memory allocation fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = 0;
	while (i < ft_strlen(s1) && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while ((j - 1) > i && ft_strchr(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, (unsigned int)i, j - i));
}
