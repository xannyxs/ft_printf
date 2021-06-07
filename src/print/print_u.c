/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 14:29:22 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_u(va_list ap)
{
	size_t		len;
	long long	hex;

	len = 0;
	hex = (unsigned int) va_arg(ap, int);
	if (flags.minus_true == 1)
	{
		len = ft_putnbr_fd(hex, 1, 0);
		len = print_width_int(hex) + len;
		flags.minus_true = 0;
	}
	else
	{
		len = print_width_int(hex);
		len = ft_putlong_fd(hex, 1, 0) + len;
	}
	return (len + 1);
}
