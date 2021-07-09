/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_perc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/25 10:55:53 by xander        #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:58 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

size_t	print_perc(void)
{
	size_t	len;

	len = 0;
	if (t_flags.minus_true == 1)
	{
		write(1, "%", 1);
		len = print_width_int(1);
	}
	else
	{
		len = print_width_int(1);
		write(1, "%", 1);
	}
	return (len + 1);
}
