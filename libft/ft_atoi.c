/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:47:29 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/06 19:28:37 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
convert a string to an integer
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				is_minus;

	result = 0;
	is_minus = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (result * is_minus);
}
