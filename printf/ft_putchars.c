/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:58:33 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/26 18:44:49 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * simple putchar and putstring functions
 * putchar increments l by 1
 * if given string in putstr is empty, it is set to (null)
 */
void	ft_putchar_l(int c, int *l)
{
	write(1, &c, 1);
	(*l)++;
}

void	ft_putstr_l(char *str, int *l)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		ft_putchar_l(*str, l);
		str++;
	}
}
