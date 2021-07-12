/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_c.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 11:47:14 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 12:55:53 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

/*
	Printf cannot work with 0 and c together. For example, "%05c".
	Precision is also not an option.
	It should show an ERROR.
*/

int	print_c(va_list ap)
{
	int		flag_c;

	flag_c = va_arg(ap, int);
	write(1, &flag_c, 1);
	return (1);
}
