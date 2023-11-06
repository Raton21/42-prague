/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:39:46 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/06 17:27:21 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The ft_calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to
 * the allocated memory.
 * The allocated memory is filled with bytes of value zero.
*/

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			i;

	i = 0;
	if ((num_elements * element_size) / element_size != num_elements)
		return (NULL);
	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		byte_ptr = (unsigned char *)ptr;
		while (i < total_size)
		{
			byte_ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>
int main() {
    int num_elements = 5;
    int element_size = sizeof(int);

    // Use your custom calloc function
    int* arr = (int*)ft_calloc(num_elements, element_size);

    if (arr != NULL) {
        // Access and print the values (initialized to 0)
        for (int i = 0; i < num_elements; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }

        // Don't forget to free the allocated memory when done
        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
