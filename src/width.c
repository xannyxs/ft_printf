/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/09 20:47:52 by xvoorvaa      ########   odam.nl         */
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
	else if (ft_isdigit(*str[0]) == 1)
	{
		flags.width = ft_atoi(str[0]);
		while (*str[0] >= '0' && *str[0] <= '9')
			(*str)++;
		len++;
	}
	return (len);
}
