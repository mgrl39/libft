/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:17:24 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 19:29:36 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isdigit() function checks if a character is a digit.
 * Returns 1 if c is a digit (from 0 to 9), 0 otherwise.
 */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
