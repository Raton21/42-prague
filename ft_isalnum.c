/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:49 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/19 18:43:49 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isalnum() function tests if character is alphabetical or number.
 *  The value of the argument must be representable as
 *	an unsigned char or the value of EOF.
 *
 *	- The isalnum() function returns zero if the character tests false
 *	and returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
