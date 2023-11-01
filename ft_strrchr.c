/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:18:58 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/25 16:20:10 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main() {
    const char *str = "Hello, World!";
    char search_char = 'l';

    char *result = strrchr(str, search_char);

    if (result != NULL) {
        printf("last '%c' at pos %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }
	printf("rawresult:%s\n",result);

	char *ft_result = ft_strrchr(str, search_char);

    if (ft_result != NULL) {
        printf("Ftlast '%c' at pos %ld\n", search_char, ft_result - str);
    } else {
        printf("ft_'%c' not found in the string.\n", search_char);
    }
	printf("ft_rawresult:%s\n",ft_result);
    return 0;
} */