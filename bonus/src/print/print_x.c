/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:39:08 by xander        ########   odam.nl         */
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

int	print_x_minus(long long hex, int check, int hex_len)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (t_flags.precision - hexlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1)
		len = convert_hex(hex, check);
	len = print_width_int(hex_len) + len;
	return (len + i);
}

int	print_x_normal(long long hex, int check, int hex_len)
{
	int	i;
	int	len;

	i = 0;
	len = print_width_int(hex_len);
	while (t_flags.precision - hexlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1)
		len = convert_hex(hex, check) + len;
	return (len + i);
}

int	print_x(va_list ap, int check)
{
	int				len;
	int				width_len;
	int				i;
	unsigned int	hex;

	len = 0;
	hex = va_arg(ap, int);
	width_len = hexlen(hex);
	i = width_len - 1;
	while (0 < i)
	{
		width_len = width_len * 10;
		i--;
	}
	if (t_flags.minus_true == 1)
		len = print_x_minus(hex, check, width_len) + len;
	else
		len = print_x_normal(hex, check, width_len) + len;
	return (len);
}
