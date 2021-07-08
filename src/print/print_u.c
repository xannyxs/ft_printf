/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/08 18:56:52 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_u_normal(unsigned long long hex)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (t_flags.precision > -1)
		len = print_width_unsigned(hex);
	while (t_flags.precision - unsigned_numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1 || numlen(hex) > 1)
		len = ft_putlong_fd(hex, 1, 0) + len;
	return (len + i);
}

int	print_u_minus(unsigned long long hex)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (t_flags.precision - unsigned_numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (t_flags.precision > -1)
		len = ft_putlong_fd(hex, 1, 0);
	len = print_width_unsigned(hex) + len;
	return (len + i);
}

int	print_u(va_list ap)
{
	size_t				len;
	unsigned long long	hex;

	len = 0;
	hex = (unsigned int) va_arg(ap, int);
	if (t_flags.minus_true == 1)
		len = print_u_minus(hex) + len;
	else
		len = print_u_normal(hex) + len;
	return (len);
}
