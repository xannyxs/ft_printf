/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/03 22:52:37 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	convert_hex(long number, int check)
{
	const char	*caps_digits;
	const char	*nocaps_digits;

	caps_digits = "0123456789ABCDEF";
	nocaps_digits = "0123456789abcdef";
	if (number > 15)
		convert_hex(number / 16, check);
	number = number % 16;
	if (check == 1)
		write(1, &caps_digits[number], 1);
	else if (check == 0)
		write(1, &nocaps_digits[number], 1);
}

void	convert_p(unsigned long long number)
{
	const char	*nocaps_digits;
	int			check;

	check = 0;
	nocaps_digits = "0123456789abcdef";
	write(1, "0x", 2);
	if (number > 15)
		convert_hex(number / 16, check);
	number = number % 16;
	write(1, &nocaps_digits[number], 1);
}

int	conversion(char *str, va_list ap)
{
	int			i;
	char		flag_c;
	long long	hex;

	i = 0;
	hex = 0;
	if (*str == 's')
		i = print_s(ap);
	else if (*str == 'i' || *str == 'd')
		i = print_id(ap);
	else if (*str == 'c')
	{
		flag_c = va_arg(ap, int);
		write(1, &flag_c, 1);
		i++;
	}
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		i++;
	}
	else if (*str == 'x')
	{
		hex = (unsigned int) va_arg(ap, int);
		convert_hex(hex, 0);
		return (hex);
	}
	else if (*str == 'X')
	{
		hex = (unsigned int) va_arg(ap, int);
		convert_hex(hex, 1);
		return (hex);
	}
	else if (*str == 'p')
	{
		hex = (unsigned long long) va_arg(ap, void *);
		convert_p(hex);
	}
	else if (*str == 'u')
	{
		hex = (unsigned int) va_arg(ap, int);
		i = ft_putnbr_fd(hex, 1, numlen(hex));
	}
	return (i);
}
