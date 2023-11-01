/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:21:38 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/31 17:14:45 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The ft_bzero() function writes n null bytes to the buffer.
 * If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*p;

	p = s;
	while (len--)
	{
		*p++ = 0;
	}
}
