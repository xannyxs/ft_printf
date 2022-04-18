/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_perc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/25 10:55:53 by xander        #+#    #+#                 */
/*   Updated: 2022/04/18 17:25:31 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

unsigned int	print_perc(t_flags *flags)
{
	(void) flags;
	write(STDOUT_FILENO, "%", 1);
	return (1);
}
