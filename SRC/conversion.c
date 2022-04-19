/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/19 15:40:36 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "conversions.h"

#include <unistd.h>

unsigned int	conversion(t_flags *flags, char *str, va_list ap)
{
	int					i;
	int					len;
	const t_conversions	s_conversions[] = {
	{'s', &print_s},
	{'c', &print_c},
	{'i', &print_id},
	{'d', &print_id},
	{'u', &print_u},
	{'p', &print_p},
	{'%', &print_perc},
	};

	i = 0;
	len = 0;
	while (s_conversions[i].key)
	{
		if (*str == s_conversions[i].key)
			len = s_conversions[i].func(flags, ap);
		i++;
	}
	if (*str == 'x')
		len = print_x(flags, ap, false);
	else if (*str == 'X')
		len = print_x(flags, ap, true);
	return (len);
}
