/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_id.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/06/12 17:43:36 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

/*
	Verander manier hoe length wordt geteld.
*/

int	print_id(va_list ap)
{
	int	width;
	int	number;
	int	i;

	i = 0;
	number = va_arg(ap, int);
	width = number;
	if (flags.minus_true == 1)
	{
		while (flags.precision - numlen(number) > i)
		{
			write(1, "0", 1);
			i++;
		}
		number = ft_putnbr_fd(number, 1, 0);
		width = print_width_int(width);
		flags.minus_true = 0;
	}
	else
	{
		width = print_width_int(number);
		while (flags.precision - numlen(number) > i)
		{
			write(1, "0", 1);
			i++;
		}
		number = ft_putnbr_fd(number, 1, 0);
	}
	number = number + width + i + 1;
	return (number);
}
