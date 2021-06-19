/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/19 14:10:50 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

/*
	Fix length in width... *cries*
 */

int	check_width(char **str, va_list ap)
{
	size_t	len;

	len = 0;
	if (ft_isdigit(*str[0]) == 1)
	{
		flags.width = ft_atoi(str[0]);
		while (*str[0] >= '0' && *str[0] <= '9')
			(*str)++;
	}
	else if (*str[0] == '*')
	{
		flags.width = va_arg(ap, int);
		if (flags.width < 0)
		{
			flags.width = flags.width * -1;
			flags.minus_true = 1;
		}
		(*str)++;
	}
	return (len);
}

int	check_precision_width(char **str, va_list ap)
{
	size_t	len;

	len = check_width(str, ap);
	if (*str[0] == '.')
	{
		(*str)++;
		if (*str[0] == '*')
		{
			flags.precision = va_arg(ap, int);
			if (flags.precision < 0)
				flags.precision = 0;
			(*str)++;
		}
		else if (ft_isdigit(*str[0]) == 1)
		{
			flags.precision = ft_atoi(str[0]);
			while (*str[0] >= '0' && *str[0] <= '9')
				(*str)++;
		}
	}
	return (len);
}
