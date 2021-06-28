/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/28 12:31:27 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_x(va_list ap, int check)
{
	size_t		len;
	long long	hex;
	int			i;

	len = 0;
	i = 0;
	hex = va_arg(ap, int);
	if (flags.minus_true == 1)
	{
		while (flags.precision - numlen(hex) > i)
		{
			write(1, "0", 1);
			i++;
		}
		if (flags.precision > -1)
			len = convert_hex(hex, check);
		len = print_width_int(hex) + len;
	}
	else
	{
		len = print_width_int(hex);
		while (flags.precision - numlen(hex) > i)
		{
			write(1, "0", 1);
			i++;
		}
		if (flags.precision > -1)
			len = convert_hex(hex, check) + len;
	}
	return (len + i);
}
