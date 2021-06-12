/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_precision.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 09:51:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/12 16:21:44 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_putstr_precision(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (*s != '\0' && flags.precision > i)
	{
		write(fd, s, 1);
		s++;
		flags.len++;
		i++;
	}
}
