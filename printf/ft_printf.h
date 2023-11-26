/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:58:27 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/26 18:26:05 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

void	ft_next_l(va_list args, const char *format, int *l);
void	ft_pointer_l(unsigned long ptr, int *l);
void	ft_putchar_l(int c, int *l);
void	ft_puthex_l(unsigned long nbr, char cases, int *l);
void	ft_putnbr_l(int n, int *l);
void	ft_putstr_l(char *str, int *l);
void	ft_unsigned_l(unsigned int n, int *l);
int		ft_printf(const char *format, ...);

#endif