/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_perc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/25 10:55:53 by xander        #+#    #+#                 */
/*   Updated: 2022/04/18 11:39:39 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

unsigned int	print_perc(void)
{
	write(STDOUT_FILENO, "%", 1);
	return (1);
}
