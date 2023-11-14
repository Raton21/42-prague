/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:25:19 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/07 19:03:19 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
	char test[]="MySmallString";
	printf("length is %d",ft_strlen(test));

	return (0);
} */
