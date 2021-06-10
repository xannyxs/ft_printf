/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_precision.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 09:51:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/10 15:28:47 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_putstr_precision(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0' && flags.precision > 0)
	{
		write(fd, s, 1);
		s++;
		flags.precision--;
	}
}
