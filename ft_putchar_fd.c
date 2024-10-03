/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:22:01 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/10 22:19:53 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putchar_fd() writes the character 'c' to the file descriptor 'fd'.
 * It writes exactly 1 byte from the address of 'c' to the file descriptor 'fd'
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
