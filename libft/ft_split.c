/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:49:51 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/24 15:57:41 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

#include "libft.h"
/*counts words in given string by comparing separating chracter and string*/

static int	ft_count_words(const char *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_count++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
	}
	return (word_count);
}
/*duplicates word into allocated string*/

static char	*ft_strndup(const char *s, size_t n)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(n + 1);
	if (copy)
	{
		while (i < (int)n)
		{
			copy[i] = s[i];
			i++;
		}
		copy[n] = '\0';
	}
	return (copy);
}

static void	ft_free_result(char **result, int n)
{
	while (n > 0)
		free(result[--n]);
	free(result);
}
/*main function, that runs trough string and splits it.*/

static char	**ft_populate_result(char **result, const char *s, char c, int n)
{
	int	i;
	int	len;

	i = 0;
	while (i < n)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		result[i] = ft_strndup(s, len);
		if (!result[i])
		{
			ft_free_result(result, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	result[n] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int		n;
	char	**result;

	if (!s)
		return (NULL);
	n = ft_count_words(s, c);
	result = (char **)malloc((n + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (ft_populate_result(result, s, c, n));
}

/* #include <stdio.h>
int	main()
{
    const char *input = "This is a sample sentence.";
    char **tokens = ft_split(input, ' ');

    if (tokens) {
        for (int i = 0; tokens[i] != NULL; i++) {
            printf("%s\n", tokens[i]);
            free(tokens[i]);
        }
        free(tokens);
    } else {
        printf("Allocation failed.\n");
    }

    return 0;
} */