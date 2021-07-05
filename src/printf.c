/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 15:11:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 23:58:15 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	reset_struct(void)
{
	t_flags.width = 0;
	t_flags.minus_true = 0;
	t_flags.zero_true = 0;
}

int	check_perc(char *str, va_list ap)
{
	size_t	len;

	while (*str != '\0')
	{
		if (*str == '%')
		{
			reset_struct();
			str++;
			if (ft_strchr(FLAGS, *str))
				flag(&str);
			if (ft_strchr(WIDTH, *str))
				check_precision_width(&str, ap);
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
	size_t	len;

	len = 0;
	ptr = (char *) str;
	va_start(arg, str);
	len = check_perc(ptr, arg);
	va_end(arg);
	return (len);
}
