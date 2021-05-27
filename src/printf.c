/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/05/27 17:14:19 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	check_perc(char *str, va_list ap)
{
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr(CONV, *str))
				conversion(str, ap);
		}
		else
			ft_putchar_fd(*str, 1);
		str++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list arg;
	char *ptr;
	size_t len;

	len = 0;
	ptr = (char *) str;
	va_start(arg, str);
	check_perc(ptr, arg);
	va_end(arg);
	return (len);
}