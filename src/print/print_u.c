/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/12 18:19:48 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

size_t	print_u(va_list ap)
{
	size_t				len;
	unsigned long long	hex;
	int					i;

	len = 0;
	i = 0;
	hex = (unsigned int) va_arg(ap, int);
	if (flags.minus_true == 1)
	{
		while (flags.precision - numlen(hex) > i)
		{
			write(1, "0", 1);
			i++;
		}
		len = ft_putlong_fd(hex, 1, 0);
		len = print_width_int(hex) + len;
	}
	else
	{
		len = print_width_int(hex);
		while (flags.precision - numlen(hex) > i)
		{
			write(1, "0", 1);
			i++;
		}
		len = ft_putlong_fd(hex, 1, 0) + len;
	}
	return (len + 1);
}
