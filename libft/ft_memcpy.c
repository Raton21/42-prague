/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:28:24 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/24 20:24:23 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
int main() {
    char source[10] = "Hello";
    char destination[10];
    int i;

    // Use your custom mymemcpy function to copy data
    ft_memcpy(destination, source, sizeof(source));

    // Print the contents of the destination
    for (i = 0; i < sizeof(destination); i++) {
        printf("%c", destination[i]);
    }

    return 0;
} */
