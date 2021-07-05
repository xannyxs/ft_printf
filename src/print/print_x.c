/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_x.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 16:02:52 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 23:57:17 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_x_minus(long long hex, int check)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (t_flags.precision - numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1)
		len = convert_hex(hex, check);
	len = print_width_int(hex) + len;
	return (len + i);
}

size_t	print_x_normal(long long hex, int check)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	len = print_width_int(hex);
	while (t_flags.precision - numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1)
		len = convert_hex(hex, check) + len;
	return (len + i);
}

size_t	print_x(va_list ap, int check)
{
	size_t		len;
	long long	hex;
	int			i;

	len = 0;
	i = 0;
	hex = va_arg(ap, int);
	if (t_flags.minus_true == 1)
		len = print_x_minus(hex, check) + len;
	else
		len = print_x_normal(hex, check) + len;
	return (len);
}
