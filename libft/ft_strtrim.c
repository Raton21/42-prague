/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:38:59 by pyerima           #+#    #+#             */
/*   Updated: 2023/11/07 19:52:21 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_inside(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		s_length;
	int		i;
	int		start;

	s_length = ft_strlen(s1);
	while (is_inside(s1[s_length - 1], set))
		s_length--;
	start = 0;
	while (is_inside(s1[start], set) && s_length > 0)
	{
		s_length--;
		start++;
	}
	str = (char *) malloc(sizeof(char) * (s_length + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < s_length)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
