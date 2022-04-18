/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 17:20:17 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>

static int	check_perc(char *str, va_list ap)
{
	int		len;
	t_flags	flags;

	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr(WIDTH, *str))
			{
				flags.width = ft_atoi(str);
				while (ft_isdigit(*str) == true)
					str++;
			}
			if (ft_strchr(CONV, *str))
				len += conversion(&flags, str, ap);
		}
		else
		{
			write(STDOUT_FILENO, str, 1);
			len++;
		}
		str++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	unsigned int	len;
	va_list			arg;

	len = 0;
	va_start(arg, str);
	len = check_perc((char *) str, arg);
	va_end(arg);
	return (len);
}
