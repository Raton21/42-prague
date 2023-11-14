/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:54:17 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/07 20:10:34 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	char buffer[10] = "Hello,";
	char destination[10];
	int i;


	ft_memmove(destination, buffer, 1);


	for (i = 0; i < sizeof(destination); i++) {
		printf("%c", destination[i]);
	}

	return 0;
} */
