/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 12:54:12 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

#include <stdio.h>

static unsigned int	ft_put_unsigned_nbr_fd(unsigned int n, int fd, unsigned int len)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		len++;
	}
	if (n > 9)
	{
		len = ft_putnbr_fd(n / 10, fd, len);
		len = ft_putnbr_fd(n % 10, fd, len);
	}
	else
	{
		n = n + '0';
		write(fd, &n, 1);
		len++;
	}
	return (len);
}

unsigned int	print_u(va_list ap)
{
	unsigned int	len;
	unsigned int	number;

	len = 0;
	number = (unsigned int) va_arg(ap, int);
	len += ft_put_unsigned_nbr_fd(number, STDOUT_FILENO, len);
	return (len);
}
