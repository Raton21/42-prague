/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:46:02 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/19 18:46:02 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isdigit() function tests if character is numerical.
 *  The value of the argument must be representable as
 *	an unsigned char or the value of EOF.
 *
 *	- The ft_isdigit() function returns zero if the character tests false
 *	and returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
