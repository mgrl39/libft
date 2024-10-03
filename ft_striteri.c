/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:49:07 by meghribe          #+#    #+#             */
/*   Updated: 2024/07/22 14:06:04 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_striteri() applies the function 'f' to each chaaracter of the string
 * passsing its index as thef irst argument to 'f'.
 * If 's' is NULL, the function returns immediately. 
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = (unsigned int)ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
