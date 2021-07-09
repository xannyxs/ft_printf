/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:03:31 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:23 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	flag(char **str)
{
	while (**str == ' ')
	{
		write(1, " ", 1);
		(*str)++;
	}
	if (**str == '-')
	{
		t_flags.minus_true = 1;
		(*str)++;
	}
	if (**str == '0')
	{
		if (t_flags.minus_true == 1)
			(*str)++;
		else
		{
			t_flags.zero_true = 1;
			(*str)++;
		}
	}
}
