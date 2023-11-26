/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:58:17 by rtonar            #+#    #+#             */
/*   Updated: 2023/11/26 18:48:53 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * this function detects characer passed to it as pointer (after %)
 */
void	ft_next_l(va_list args, const char *format, int *l)
{
	if (*format == 'c')
		ft_putchar_l(va_arg(args, int), l);
	else if (*format == 's')
		ft_putstr_l(va_arg(args, char *), l);
	else if (*format == 'p')
		ft_pointer_l(va_arg(args, unsigned long), l);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr_l(va_arg(args, int), l);
	else if (*format == 'u')
		ft_unsigned_l(va_arg(args, unsigned int), l);
	else if (*format == 'x')
		ft_puthex_l(va_arg(args, unsigned int), 'l', l);
	else if (*format == 'X')
		ft_puthex_l(va_arg(args, unsigned int), 'u', l);
	if (*format == '%')
		ft_putchar_l('%', l);
}
/**
 * main printf function
 * creates value l for number of printed characters
 * and passes pointer to subfunctions.
 * it loops trough given string and checks for % sign.
 * it uses valist for aditional arguments
 */

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		l;

	va_start(args, format);
	l = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_next_l(args, format, &l);
		}
		else
			ft_putchar_l(*format, &l);
		format++;
	}
	va_end(args);
	return (l);
}
/**
 * main function for testing
 */

/* int main() {
	int a = 5;
	char b = 'x';
	char str[] = "test";
	unsigned int u = 123;
	int d = -456;
	int i = 789;
	int x = 0xabc;

	printf("Testing with values a = %d and b = %c\n", a, b);
	ft_printf("Testing with values a = %d and b = %c\n", a, b);

	printf("Testing %%: %%\n");
	ft_printf("Testing %%: %%\n");

	printf("Testing %%x with x = %x\n", x);
	ft_printf("Testing %%x with x = %x\n", x);

	printf("Testing %%u with u = %u\n", u);
	ft_printf("Testing %%u with u = %u\n", u);

	printf("Testing %%d with d = %d\n", d);
	ft_printf("Testing %%d with d = %d\n", d);

	printf("Testing %%i with i = %i\n", i);
	ft_printf("Testing %%i with i = %i\n", i);

	printf("Testing %%s with test = %s\n", str);
	ft_printf("Testing %%s with test = %s\n", str);
	
	return (0);
} */

/**
 * cc ft_printf.c ft_putnbrs.c ft_putchars.c ft_puthex.c
 * 
 */
