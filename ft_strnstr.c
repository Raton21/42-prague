/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:49:32 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/01 16:56:54 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "my little test string";
    const char *needle = "test";
    size_t len = 10;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
printf("Substring found at position %ld: %s\n", result - haystack, result);
    } else {
        printf("Substring not found in the first %zu characters.\n", len);
    }

    return 0;
} */