/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:03:31 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/28 14:11:04 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	flag(char **str)
{
	while (**str == ' ')
	{
		write(1, " ", 1);
		(*str)++;
	}
	if (**str == '-')
	{
		flags.minus_true = 1;
		(*str)++;
	}
	if (**str == '0')
	{
		if (flags.minus_true == 1)
			(*str)++;
		else
		{
			flags.zero_true = 1;
			(*str)++;
		}
	}
}
