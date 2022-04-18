/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 12:03:38 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>
#include <stdarg.h>

static int	check_perc(char *str, va_list ap)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_strchr(CONV, str[i]))
				len += conversion(str[i], ap);
		}
		else
		{
			write(STDOUT_FILENO, &str[i], 1);
			len++;
		}
		i++;
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
