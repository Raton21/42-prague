/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:26:51 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/01 17:14:42 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_atoi() function converts the initial portion of the string
 *	pointed to by *str to int representation.
 *	Not overflow protected.
 *	Outputs int number
**/

#include "libft.h"

/* int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		is_negative;

	is_negative = 0;
	result = 0;
	i = 0;
	while (str[i] == ' ' )
		i++;
	if (str[i] == '-')
	{
		is_negative = !is_negative;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
	{
		result = -result;
	}
	return (result);
} */

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}
