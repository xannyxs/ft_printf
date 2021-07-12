/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 13:27:08 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	check_perc(char *str, va_list ap)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr(CONV, *str))
				len = conversion(str, ap) + len;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			len++;
		}
		str++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	char	*ptr;
	int		len;

	len = 0;
	ptr = (char *) str;
	va_start(arg, str);
	len = check_perc(ptr, arg);
	va_end(arg);
	return (len);
}
