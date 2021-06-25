/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 15:57:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/25 11:40:44 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

/*
	Tijdelijke oplossing met "Flags.len". Neem het ook over voor de rest.
*/

int	print_s(va_list ap)
{
	char	*ptr;
	char	*str;

	ptr = va_arg(ap, char *);
	if (ptr == NULL)
		ptr = "(null)";
	str = ft_strdup(ptr);
	if (flags.minus_true == 1)
	{
		if (flags.precision != 0)
			ft_putstr_precision(ptr, 1);
		else
			ft_putstr_fd(ptr, 1);
		flags.len = print_width_str(str) + flags.len;
	}
	else
	{
		flags.len = print_width_str(str) + flags.len;
		if (flags.precision != 0)
			ft_putstr_precision(ptr, 1);
		else
			ft_putstr_fd(ptr, 1);
	}
	return (flags.len);
}
