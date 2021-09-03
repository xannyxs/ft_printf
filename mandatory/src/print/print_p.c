/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:04:30 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/09/02 12:06:40 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

/*
	Printf cannot work with 0 and p together. For example, "%015p".
	Precision is also not an option.
	It should show an ERROR.
*/

int	print_p(va_list ap)
{
	int				len;
	unsigned long	hex;

	len = 0;
	hex = (unsigned long long) va_arg(ap, void *);
	write(1, "0x", 2);
	len = convert_hex(hex, 0);
	return (len + 2);
}
