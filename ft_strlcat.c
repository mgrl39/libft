/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:34:15 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:28:31 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat() function concatenates src to dst ensuring NUL-termination 
 * and returns the total length of the string it tried to create
 * (initial length of dst + length of src).
 * It prevents buffer overruns by limiting the concatenation 
 * to size - 1 characters.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	space;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	space = size - dst_len - 1;
	ft_strlcpy(dst + dst_len, src, space + 1);
	return (dst_len + src_len);
}
