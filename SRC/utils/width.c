/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:31 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	check_width(char **str, va_list ap)
{
	if (ft_isdigit(*str[0]) == 1)
	{
		t_flags.width = ft_atoi(str[0]);
		while (*str[0] >= '0' && *str[0] <= '9')
			(*str)++;
	}
	else if (*str[0] == '*')
	{
		t_flags.width = va_arg(ap, int);
		if (t_flags.width < 0)
		{
			t_flags.width = t_flags.width * -1;
			t_flags.minus_true = 1;
		}
		(*str)++;
	}
}

void	check_precision_width(char **str, va_list ap)
{
	check_width(str, ap);
	if (*str[0] == '.')
	{
		(*str)++;
		if (*str[0] == '*')
		{
			t_flags.precision = va_arg(ap, int);
			if (t_flags.precision < 0)
				t_flags.precision = 0;
			else if (t_flags.precision == 0)
				t_flags.precision = -1;
			(*str)++;
		}
		else if (ft_isdigit(*str[0]) == 1)
		{
			t_flags.precision = ft_atoi(str[0]);
			if (t_flags.precision == 0)
				t_flags.precision = -1;
			while (*str[0] >= '0' && *str[0] <= '9')
				(*str)++;
		}
		else
			t_flags.precision = -1;
	}
}
