/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:23:08 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/01 17:05:52 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument.Negative numbers must be handled.

 * Returns the string representing the integer or NULL if the allocation fails.
**/

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	length;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}

/* static int	num_digits(long n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*edge_case(void)
{
	char	*ptr;

	ptr = malloc(12);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, "-2147483648", 12);
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*ptr;

	if (n == -2147483648)
		return (edge_case());
	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	len = num_digits(n) + is_neg;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (len > 0)
	{
		ptr[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (is_neg)
		ptr[0] = '-';
	return (ptr);
} */
