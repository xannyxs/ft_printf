/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:47:14 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 11:33:13 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>
#include <stdarg.h>

/*
	Printf cannot work with 0 and c together. For example, "%05c".
	Precision is also not an option.
	It should show an ERROR.
*/

unsigned int	print_c(va_list ap)
{
	int	flag_c;

	flag_c = va_arg(ap, int);
	write(STDOUT_FILENO, &flag_c, 1);
	return (1);
}
