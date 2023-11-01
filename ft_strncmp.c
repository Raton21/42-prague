/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:05 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/01 17:18:45 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/* #include <string.h>
#include <stdio.h> 
int main()
{
	int len = 5;
	char* s1 = "Hpple";
	char* s2 = "Hppetizer";
	char* s3 = "Hpplejuice";
	// compare s1 and s2 using strcmp()
int result = ft_strncmp(s1, s2, len);
printf("Comparing %s and %s: %d\n", s1, s2, result);

// compare s1 and s3 using strcmp()
result = ft_strncmp(s1, s3, len);
printf("Comparing %s and %s: %d\n", s1, s3, result);

result = strncmp(s1, s2, len);
printf("Comparing %s and %s: %d\n", s1, s2, result);

// compare s1 and s3 using strcmp()
result = strncmp(s1, s3, len);
printf("Comparing %s and %s: %d\n", s1, s3, result);

return 0;
} */
