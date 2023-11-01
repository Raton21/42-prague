/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:12:53 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/22 19:12:53 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_isprint() function tests for any printing character,
 *	including space (‘ ’).  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isprint() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
**/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}
