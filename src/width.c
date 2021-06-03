/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/03 22:32:03 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void width(char **str)
{
	if (*str[0] == '-')
	{
		flags.minus_true = 1;
		(*str)++;
	}
	flags.width = ft_atoi(str[0]);
	while (*str[0] >= '0' && *str[0] <= '9')
		(*str)++;
}

int	print_width(int ap)
{
	size_t len;

	len = 0;
	while (flags.width - numlen(ap) > 0)
	{
		write(1, " ", 1);
		flags.width--;
		len++;
	}
	len--;
	return (len);
}
