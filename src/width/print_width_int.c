/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_int.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:38:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 23:39:58 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_space(int ft_numlen, int remaining)
{
	int	len;

	len = 0;
	while (flags.width - ft_numlen - flags.precision > len
		&& flags.zero_true == 1 && flags.precision <= 0)
	{
		if (flags.negative_true == 1)
		{
			write(1, "-", 1);
			flags.negative_true = 0;
		}
		write(1, "0", 1);
		len++;
	}
	while (flags.width - ft_numlen > len && flags.precision == 0)
	{
		write(1, " ", 1);
		len++;
	}
	while (flags.width - ft_numlen - remaining > len && flags.precision != 0)
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}

int	print_width_int(long long ap)
{
	int	len;
	int	remaining;
	int	ft_numlen;

	len = 0;
	remaining = 0;
	ft_numlen = numlen(ap);
	if (flags.precision < 0)
		ft_numlen = 0;
	if (flags.precision > ft_numlen)
		remaining = flags.precision - ft_numlen;
	len = print_space(ft_numlen, remaining) + len;
	if (flags.negative_true == 1)
	{
		write(1, "-", 1);
		flags.negative_true = 0;
	}
	return (len);
}
