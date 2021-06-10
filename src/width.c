/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/10 11:10:57 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

/*
	Fix length in width... *cries*
 */

int	width(char **str, va_list ap)
{
	size_t	len;

	len = 0;
	if (*str[0] == '*')
	{
		(*str)++;
		if (*str[0] == '.')
		{
			flags.width = va_arg(ap, int);
			(*str)++;
		}
		else
		{
			flags.precision = va_arg(ap, int);
			(*str)++;
		}
	}
	else if (*str[0] == '.')
	{
		(*str)++;
		flags.zero_true = 1;
	}
	if (ft_isdigit(*str[0]) == 1)
	{
		flags.width = ft_atoi(str[0]);
		while (*str[0] >= '0' && *str[0] <= '9')
			(*str)++;
	}
	return (len);
}
