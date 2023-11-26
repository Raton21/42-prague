/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:59:05 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/26 18:50:03 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * just like regular punnbr function, it just adds 1 to l for every number
 */
void	ft_putnbr_l(int n, int *l)
{
	if (n == -2147483648)
	{
		ft_putstr_l("-2147483648", l);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_l('-', l);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_l(n / 10, l);
		ft_putnbr_l(n % 10, l);
	}
	if (n < 10)
	{
		ft_putchar_l(n + '0', l);
	}
}

void	ft_unsigned_l(unsigned int n, int *l)
{
	if (n >= 10)
		ft_unsigned_l(n / 10, l);
	ft_putchar_l(n % 10 + '0', l);
}
