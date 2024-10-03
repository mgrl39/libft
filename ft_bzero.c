/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:42:46 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 13:48:01 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_bzero() function erases the data in the n bytes o the memory
 * starting at the location pointed to by s by writing zeeros to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
