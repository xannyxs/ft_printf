/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_unsigned.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:38:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:44 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

int	print_space_u(unsigned long long ap)
{
	int	len;
	int	remaining;

	len = 0;
	remaining = 0;
	if (t_flags.precision > numlen(ap))
		remaining = t_flags.precision - numlen(ap);
	while (t_flags.width - numlen(ap) - t_flags.precision > len
		&& t_flags.zero_true == 1 && t_flags.precision <= 0)
	{
		write(1, "0", 1);
		len++;
	}
	while (t_flags.width - numlen(ap) > len && t_flags.precision == 0)
	{
		write(1, " ", 1);
		len++;
	}
	while (t_flags.width - numlen(ap) - remaining > len
		&& t_flags.precision != 0)
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}

int	print_width_unsigned(unsigned long long ap)
{
	int	len;

	len = 0;
	len = print_space_u(ap);
	if (t_flags.precision < 0)
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}
