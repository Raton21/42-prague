/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:42:25 by rtonar            #+#    #+#             */
/*   Updated: 2023/10/30 17:42:04 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num_string;

	num_string = ft_itoa(n);
	ft_putstr_fd(num_string, fd);
}

/* void	ft_putnbr_fd(int n, int fd)
{
	long	tmpnb;
	char	__buff;

	tmpnb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		tmpnb = -tmpnb;
	}
	if (tmpnb >= 10)
	{
		ft_putnbr_fd(tmpnb / 10, fd);
	}
	__buff = tmpnb % 10 + '0';
	write(fd, &__buff, 1);
} */
