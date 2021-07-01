/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_id.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/07/01 15:24:57 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_id_minus(int number)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		number = number * -1;
		len++;
		flags.width--;
	}
	while (flags.precision - numlen(number) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (flags.precision > -1)
		len = ft_putnbr_fd(number, 1, 0) + len;
	len = print_width_int(number) + len;
	return (len + i);
}

int	print_id_normal(int number)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (number < 0)
	{
		number = number * -1;
		len++;
		flags.width--;
		flags.negative_true = 1;
	}
	len = print_width_int(number) + len;
	while (flags.precision - numlen(number) > i)
	{
		write(1, "0", 1);
		i++;
	}
	if (flags.precision > -1)
		len = ft_putnbr_fd(number, 1, 0) + len;
	return (len + i);
}

int	print_id(va_list ap)
{
	int	number;
	int	len;

	len = 0;
	number = va_arg(ap, int);
	if (flags.minus_true == 1)
		len = print_id_minus(number) + len;
	else
		len = print_id_normal(number) + len;
	return (len);
}
