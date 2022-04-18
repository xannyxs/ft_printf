/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:04:30 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 17:22:48 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

/*
	Printf cannot work with 0 and p together. For example, "%015p".
	Precision is also not an option.
	It should show an ERROR.
*/

unsigned int	print_p(t_flags *flags, va_list ap)
{
	size_t				len;
	unsigned long long	hex;

	(void) flags;
	len = 0;
	hex = (unsigned long long) va_arg(ap, void *);
	write(STDOUT_FILENO, "0x", 2);
	len += convert_hex(hex, false);
	return (len + 2);
}
