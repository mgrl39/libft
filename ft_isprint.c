/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:50:41 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:29:42 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isprint() function checks if a character is a printable character.
// Returns 1 if c is a printable character, 0 otherwise.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
