/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 22:56:48 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_u_normal(unsigned long long hex)
{
	int		i;
	size_t	len;

	i = 0;
	len = print_width_unsigned(hex);
	while (flags.precision - unsigned_numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (flags.precision > -1)
		len = ft_putlong_fd(hex, 1, 0) + len;
	return (len + i);
}

size_t	print_u_minus(unsigned long long hex)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (flags.precision - unsigned_numlen(hex) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (flags.precision > -1)
		len = ft_putlong_fd(hex, 1, 0);
	len = print_width_unsigned(hex) + len;
	return (len + i);
}

size_t	print_u(va_list ap)
{
	size_t				len;
	unsigned long long	hex;

	len = 0;
	hex = (unsigned int) va_arg(ap, int);
	if (flags.minus_true == 1)
		len = print_u_minus(hex) + len;
	else
		len = print_u_normal(hex) + len;
	return (len);
}
