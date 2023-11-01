/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:29:29 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/19 18:29:29 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isalpha() function tests if character is alphabetical.
 *  The value of the argument must be representable as
 *	an unsigned char or the value of EOF.
 *
 *	- The ft_isalpha() function returns zero if the character tests false
 *	and returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
