/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 17:23:24 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

unsigned int	print_x(t_flags *flags, va_list ap, bool is_uppercase)
{
	int				len;
	unsigned int	hex;

	(void) flags;
	len = 0;
	hex = va_arg(ap, int);
	len += convert_hex(hex, is_uppercase);
	return (len);
}
