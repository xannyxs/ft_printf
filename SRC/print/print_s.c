/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 15:57:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 17:23:03 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

unsigned int	print_s(t_flags *flags, va_list ap)
{
	unsigned int	len;
	char			*str;

	(void) flags;
	len = 0;
	str = va_arg(ap, char *);
	if (!str)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}
	while (str[len] != '\0')
	{
		write(STDOUT_FILENO, &str[len], 1);
		len++;
	}
	return (len);
}
