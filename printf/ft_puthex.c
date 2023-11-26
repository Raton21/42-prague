/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:58:40 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/26 18:25:57 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_l(unsigned long nbr, char cases, int *l)
{
	char	*base_u;
	char	*base_l;

	base_u = "0123456789ABCDEF";
	base_l = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthex_l(nbr / 16, cases, l);
		ft_puthex_l(nbr % 16, cases, l);
	}
	else
	{
		if (cases == 'u')
			ft_putchar_l(base_u[nbr], l);
		else if (cases == 'l')
			ft_putchar_l(base_l[nbr], l);
	}
}

void	ft_pointer_l(unsigned long ptr, int *l)
{
	if (ptr == 0)
		ft_putstr_l("(nil)", l);
	else
	{
		ft_putstr_l("0x", l);
		ft_puthex_l(ptr, 'l', l);
	}
}
