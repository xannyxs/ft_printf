/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/19 13:15:02 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>

static void	reset_values(t_flags *flags)
{
	flags->width = 0;
}

static unsigned int	len_of_width(char **str)
{
	unsigned int	width;

	width = ft_atoi(*str);
	while (ft_isdigit(**str) == true)
		(*str)++;
	return (width);
}

static int	check_perc(char *str, va_list ap)
{
	int		len;
	t_flags	flags;

	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			reset_values(&flags);
			str++;
			if (ft_strchr(WIDTH, *str))
				flags.width = len_of_width(&str);
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
