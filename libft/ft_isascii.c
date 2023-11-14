/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:45:04 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/19 18:45:04 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_isascii() function tests for an ASCII character,
 *	which is any character between 0 and decimal 127 inclusive.
**/

#include "libft.h" 

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
