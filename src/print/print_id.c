/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_conv.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/06/07 16:05:07 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_id(va_list ap)
{
	int	width;
	int	number;

	number = va_arg(ap, int);
	width = number;
	if (flags.minus_true == 1)
	{
		number = ft_putnbr_fd(number, 1, 0);
		width = print_width_int(width);
		flags.minus_true = 0;
	}
	else
	{
		width = print_width_int(number);
		number = ft_putnbr_fd(number, 1, 0);
	}
	number = number + width + 1;
	return (number);
}
