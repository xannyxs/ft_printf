/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_id.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2022/04/18 17:22:37 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

unsigned int	print_id(t_flags *flags, va_list ap)
{
	long			number;
	unsigned int	len;

	(void) flags;
	len = 0;
	number = va_arg(ap, long);
	len += ft_putnbr_fd(number, STDOUT_FILENO, len);
	return (len);
}
