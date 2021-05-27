/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/05/27 17:07:42 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	conversion(char *str, va_list ap)
{
	char *ptr;
	int i;
	
	i = 0;
	if (*str == 's')
	{
		ptr = va_arg(ap, char *);
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
			i++;
		}
	}
	else if (*str == 'i' || *str == 'd')
	{
		i = va_arg(ap, int);
		i = ft_putnbr_fd(i, 1, 0);
	}
	else if (*str == 'c')
	{
	char flag_c;
	
	flag_c = va_arg(ap, int);
	write(1, &flag_c, 1);
	return (1);
	}
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		i++;
	}
	return (i);
}
