/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:42:30 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:29:51 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isascii() function checks if a character is an ASCII character.
// Returns 1 if c is an ASCII character, 0 otherwise.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
