/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 13:14:48 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

int	hexlen(long long hex)
{
	int	len;

	len = 0;
	if (hex > 15)
		len = hexlen(hex / 16) + len;
	len++;
	return (len);
}

int	print_x(va_list ap, int check)
{
	int				len;
	unsigned int	hex;

	hex = va_arg(ap, int);
	len = convert_hex(hex, check);
	return (len);
}
