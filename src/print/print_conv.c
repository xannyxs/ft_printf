/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_conv.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/06/06 14:03:51 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_id(va_list ap)
{
	int	width;
	int	number;

	number = va_arg(ap, int);
	width = number;
	if (flags.minus_true == 1)
	{
		number = ft_putnbr_fd(number, 1, 0);
		width = print_width(width);
		flags.minus_true = 0;
	}
	else
	{
		width = print_width(number);
		number = ft_putnbr_fd(number, 1, 0);
	}
	number = number + width;
	return (number);
}

int	print_s(va_list ap)
{
	size_t	len;
	char	*ptr;
	char	*str;

	len = 0;
	ptr = va_arg(ap, char *);
	str = ft_strdup(ptr);
	if (flags.minus_true == 1)
	{
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
			len++;
		}
		len = print_width_str(str) + len;
		flags.minus_true = 0;
	}
	else
	{
		len = print_width_str(str) + len;
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
			len++;
		}
	}
	return (len);
}
