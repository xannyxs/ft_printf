/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/06 12:50:30 by xvoorvaa      ########   odam.nl         */
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
	int			check;
	size_t		len;

	check = 0;
	len = 3;
	nocaps_digits = "0123456789abcdef";
	write(1, "0x", 2);
	if (number > 15)
		len = convert_hex(number / 16, check) + len;
	number = number % 16;
	write(1, &nocaps_digits[number], 1);
	return (len);
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
		i = convert_hex(hex, 0);
	}
	else if (*str == 'X')
	{
		hex = (unsigned int) va_arg(ap, int);
		i = convert_hex(hex, 1);
	}
	else if (*str == 'p')
	{
		hex = (unsigned long long) va_arg(ap, void *);
		i = convert_p(hex);
	}
	else if (*str == 'u')
	{
		hex = (unsigned int) va_arg(ap, int);
		i = ft_putlong_fd(hex, 1, 0);
		i--;
	}
	return (i);
}
