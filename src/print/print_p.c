/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:04:30 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/08 16:49:06 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

/*
	Printf cannot work with 0 and p together. For example, "%015p".
	Precision is also not an option.
	It should show an ERROR.
*/

size_t	print_p(va_list ap)
{
	size_t				len;
	unsigned long long	hex;

	len = 0;
	hex = (unsigned long long) va_arg(ap, void *);
	t_flags.width = t_flags.width - 1;
	t_flags.zero_true = 0;
	if (hex == 0)
		t_flags.width--;
	if (t_flags.minus_true == 1)
	{
		write(1, "0x", 2);
		len = convert_hex(hex, 0);
		len = print_width_int(hex) + len;
	}
	else
	{
		len = print_width_int(hex);
		write(1, "0x", 2);
		len = convert_hex(hex, 0) + len;
	}
	return (len + 2);
}
