/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_conv.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/06/07 12:16:45 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_id(va_list ap)
{
	int	width;
	int	number;

	number = va_arg(ap, int);
	width = number;
	if (flags.minus_true == 1)
	{
		number = ft_putnbr_fd(number, 1, 0);
		width = print_width_int(width);
		flags.minus_true = 0;
	}
	else
	{
		width = print_width_int(number);
		number = ft_putnbr_fd(number, 1, 0);
	}
	number = number + width;
	return (number);
}

int	print_s(va_list ap)
{
	size_t	len;
	char	*ptr;
	char	*str;

	len = 0;
	ptr = va_arg(ap, char *);
	str = ft_strdup(ptr);
	if (flags.minus_true == 1)
	{
		ft_putstr_fd(ptr, 1);
		len = print_width_str(str) + ft_strlen(ptr);
	}
	else
	{
		len = print_width_str(str) + ft_strlen(ptr);
		ft_putstr_fd(ptr, 1);
	}
	return (len);
}

size_t	print_x(va_list ap, int check)
{
	size_t len;
	int hex;

	len = 0;
	hex = va_arg(ap, int);
	if (flags.minus_true == 1)
	{
		len = convert_hex(hex, check);
		len = print_width_int(hex) + len;
	}
	else
	{
		len = print_width_int(hex);
		len = convert_hex(hex, check) + len;
	}
	return (len);
}

/*
	Printf cannot work with 0 and p together. For example, "%015p".
	It should show an ERROR.
*/

size_t	print_p(va_list ap)
{
	size_t len;
	unsigned long long hex;

	len = 0;
	hex = (unsigned long long) va_arg(ap, void *);
	flags.width = flags.width - 2;
	flags.zero_true = 0;
	if (flags.minus_true == 1)
	{
		len = convert_p(hex);
		len = print_width_int(hex) + len;
	}
	else
	{
		len = print_width_int(hex);
		len = convert_p(hex) + len;
	}
	len++;
	return (len);
}