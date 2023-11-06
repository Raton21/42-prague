/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:59:04 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/04 16:02:51 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_memcmp() function compares 2 strings of memory
 *
**/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((int)str1[i] - (int)str2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    unsigned char block1[] = {0x10, 0x20, 0x30, 0x40, 0x50};
    unsigned char block2[] = {0x10, 0x20, 0x30, 0x40, 0x60};
    size_t num_bytes = 2;

    int result = memcmp(block1, block2, num_bytes);

    if (result == 0) {
        printf("The two memory blocks are equal.\n");
    } else if (result < 0) {
        printf("The first differing byte in block1 is smaller than block2.\n");
    } else {
        printf("The first differing byte in block1 is greater than block2.\n");
    }
	printf("raw:%d\n",result);

	printf("FT:\n");
	result = ft_memcmp(block1, block2, num_bytes);

    if (result == 0) {
        printf("The two memory blocks are equal.\n");
    } else if (result < 0) {
        printf("The first differing byte in block1 is smaller than block2.\n");
    } else {
        printf("The first differing byte in block1 is greater than block2.\n");
    }
	printf("raw:%d\n",result);

    return 0;
}
 */