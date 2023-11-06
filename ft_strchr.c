/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:05:47 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/04 16:04:07 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main() {
    const char *str = "Hello, World!";
    char search_char = 'l';

    char *result = strchr(str, search_char);
	char *ft_result = ft_strchr(str, search_char);

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }
	printf("rawresult:%s\n",result);

	if (result != NULL) {
        printf("ft_Found '%c' at position %ld\n", search_char, ft_result - str);
    } else {
        printf("ft_'%c' not found in the string.\n", search_char);
    }
	printf("ft_rawresult:%s\n",ft_result);
    return 0;
} */