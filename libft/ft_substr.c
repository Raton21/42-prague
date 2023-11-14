/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:38:43 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/14 19:38:45 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	slen;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = start;
	j = 0;
	if (start >= slen)
	{
		newstr = (char *)malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > slen - start)
		len = slen - start;
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s + start, len + 1);
	return (newstr);
}
