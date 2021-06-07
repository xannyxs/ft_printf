/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 11:50:37 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		convert_hex(long number, int check)
{
	const char	*caps_digits;
	const char	*nocaps_digits;
	size_t		len;

	len = 0;
	caps_digits = "0123456789ABCDEF";
	nocaps_digits = "0123456789abcdef";
	if (number > 15)
		len = convert_hex(number / 16, check) + len;
	number = number % 16;
	if (check == 1)
		write(1, &caps_digits[number], 1);
	else if (check == 0)
		write(1, &nocaps_digits[number], 1);
	len++;
	return (len);
}

int		convert_p(unsigned long long number)
{
	const char	*nocaps_digits;
	size_t		len;

	len = 3;
	nocaps_digits = "0123456789abcdef";
	write(1, "0x", 2);
	if (number > 15)
		len = convert_hex(number / 16, 0) + len;
	number = number % 16;
	write(1, &nocaps_digits[number], 1);
	return (len);
}

int	conversion(char *str, va_list ap)
{
	size_t		len;

	len = 0;
	if (*str == 's')
		len = print_s(ap);
	else if (*str == 'i' || *str == 'd')
		len = print_id(ap);
	else if (*str == 'c')
		len = print_c(ap);
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	else if (*str == 'x')
		len = print_x(ap, 0);
	else if (*str == 'X')
		len = print_x(ap, 1);
	else if (*str == 'p')
		len = print_p(ap);
	else if (*str == 'u')
		len = print_u(ap);
	return (len);
}
