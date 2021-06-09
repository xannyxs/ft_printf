/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_int.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:38:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/09 19:39:54 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_width_int(int ap)
{
	int	len;

	len = 0;
	while (flags.width - numlen(ap) > len && flags.zero_true == 1)
	{
		write(1, "0", 1);
		len++;
	}
	while (flags.width - numlen(ap) > len)
	{
		write(1, " ", 1);
		len++;
	}
	len--;
	return (len);
}
