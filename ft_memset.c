/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:59:22 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/22 18:07:11 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = s;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = val;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    char buffer[10] = "testamica "; // An array of 10 characters
    int i;

    // Initialize the buffer with zeros using memset
    ft_memset(buffer, 5, sizeof(buffer)+2);

    // Print the contents of the buffer
    for (i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }
	printf("\n");
    return 0;
} */