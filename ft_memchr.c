/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:34:15 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/30 14:09:30 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_memchr() function locates the first occurrence of c (converted to
 *	an unsigned char) in string str.
 *
 *	The memchr() function returns a pointer to the byte located, or NULL
 *	if no such byte exists within n bytes.
**/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	i = 0;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main() {
	unsigned char data[] = {0x10, 0x20, 0x30, 0x40, 0x50, 0x60};
	int search_value = 0x60;
	size_t num_bytes = sizeof(data);
	void *result = memchr(data, search_value, num_bytes);
	if (result != NULL)
	{
printf("Found value 0x%02X at pos %ld\n", 
search_value, (unsigned char *)result - data);
	}
	else
	{
		printf("Value 0x%02X not found in the memory block.\n", search_value);
	}
	result = ft_memchr(data, search_value, num_bytes);
	printf("FT:\n");
	if (result != NULL)
	{
printf("value 0x%02X at pos %ld\n", 
search_value, (unsigned char *)result - data);
	}
	else
	{
		printf("Value 0x%02X not found in the memory block.\n", search_value);
	}
	//printf("Raw:%ld\n",result);
    return (0);
} 
 */