/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/19 15:40:43 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

static int	convert_hex(unsigned long number, bool is_uppercase)
{
	const char	*caps_digits;
	const char	*nocaps_digits;
	size_t		len;

	len = 0;
	caps_digits = "0123456789ABCDEF";
	nocaps_digits = "0123456789abcdef";
	if (number > 15)
		len += convert_hex(number / 16, is_uppercase);
	number = number % 16;
	if (is_uppercase == true)
		write(STDOUT_FILENO, &caps_digits[number], 1);
	else if (is_uppercase == false)
		write(STDOUT_FILENO, &nocaps_digits[number], 1);
	len++;
	return (len);
}

static unsigned int	print_int_width(t_flags *flags, unsigned int number)
{
	int	len;
	int	amount_of_spaces;

	len = 0;
	amount_of_spaces = flags->width - ft_numlen(number, len);
	while (len <= amount_of_spaces)
	{
		write(STDOUT_FILENO, " ", 1);
		len++;
	}
	return (len);
}

unsigned int	print_x(t_flags *flags, va_list ap, bool is_uppercase)
{
	int				len;
	unsigned int	hex;

	len = 0;
	hex = va_arg(ap, int);
	if (flags->width > 0)
		len += print_int_width(flags, hex);
	len += convert_hex(hex, is_uppercase);
	return (len);
}
