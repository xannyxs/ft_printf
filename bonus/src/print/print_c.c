/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:47:14 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:49 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

/*
	Printf cannot work with 0 and c together. For example, "%05c".
	Precision is also not an option.
	It should show an ERROR.
*/

int	print_c(va_list ap)
{
	int		flag_c;
	size_t	len;

	len = 0;
	flag_c = va_arg(ap, int);
	t_flags.zero_true = 0;
	if (t_flags.minus_true == 1)
	{
		write(1, &flag_c, 1);
		len = print_width_int(1);
	}
	else
	{
		len = print_width_int(1);
		write(1, &flag_c, 1);
	}
	return (len + 1);
}
