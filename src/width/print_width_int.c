/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_int.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:38:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/06 00:02:46 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_space(int numlen, int remaining)
{
	int	len;

	len = 0;
	while (t_flags.width - numlen - t_flags.precision > len
		&& t_flags.zero_true == 1 && t_flags.precision <= 0)
	{
		if (t_flags.negative_true == 1)
		{
			write(1, "-", 1);
			t_flags.negative_true = 0;
		}
		write(1, "0", 1);
		len++;
	}
	while (t_flags.width - numlen > len && t_flags.precision == 0)
	{
		write(1, " ", 1);
		len++;
	}
	while (t_flags.width - numlen - remaining > len && t_flags.precision != 0)
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
	if (t_flags.precision < 0)
		ft_numlen = 0;
	if (t_flags.precision > ft_numlen)
		remaining = t_flags.precision - ft_numlen;
	len = print_space(ft_numlen, remaining) + len;
	if (t_flags.negative_true == 1)
	{
		write(1, "-", 1);
		t_flags.negative_true = 0;
	}
	return (len);
}
