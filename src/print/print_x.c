/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 16:03:17 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_x(va_list ap, int check)
{
	size_t	len;
	int		hex;

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
	len++;
	return (len);
}
