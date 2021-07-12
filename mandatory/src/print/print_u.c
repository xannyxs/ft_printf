/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_u.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:27:44 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 13:17:48 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

int	print_u(va_list ap)
{
	int					len;
	unsigned long long	hex;

	hex = (unsigned int) va_arg(ap, int);
	len = ft_putlong_fd(hex, 1, 0);
	return (len);
}
