/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flag.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:03:31 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/09 20:01:56 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	flag(char **str)
{
	if (**str == '-')
		flags.minus_true = 1;
	if (**str == '0')
		flags.zero_true = 1;
	(*str)++;
}
