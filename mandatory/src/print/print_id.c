/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_id.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 17:12:39 by xander        #+#    #+#                 */
/*   Updated: 2021/09/07 11:05:38 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"
#include <limits.h>

int	print_max(void)
{
	write(1, "-2147483648", 11);
	return (11);
}

int	print_id(va_list ap)
{
	int	number;
	int	len;

	len = 0;
	number = va_arg(ap, int);
	if (number - 1 == INT_MAX)
		len = print_max() + len;
	else
		len = ft_putnbr_fd(number, 1, 0) + len;
	return (len);
}
