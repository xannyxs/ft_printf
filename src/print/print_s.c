/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 15:57:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 23:57:07 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

/*
	Tijdelijke oplossing met "t_flags.len". Neem het ook over voor de rest.
*/

int	print_s(va_list ap)
{
	char	*ptr;
	char	*str;

	ptr = va_arg(ap, char *);
	if (ptr == NULL)
		ptr = "(null)";
	str = ft_strdup(ptr);
	if (t_flags.minus_true == 1)
	{
		if (t_flags.precision != 0)
			ft_putstr_precision(ptr, 1);
		else
			ft_putstr_fd(ptr, 1);
		t_flags.len = print_width_str(str) + t_flags.len;
	}
	else
	{
		t_flags.len = print_width_str(str) + t_flags.len;
		if (t_flags.precision != 0)
			ft_putstr_precision(ptr, 1);
		else
			ft_putstr_fd(ptr, 1);
	}
	return (t_flags.len);
}
