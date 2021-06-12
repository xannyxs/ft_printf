/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_str.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:37:27 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/12 15:34:43 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_width_str(char *str)
{
	int	len;
	int	strlen;

	len = 0;
	strlen = ft_strlen(str);
	if (flags.zero_true == 1)
	{
		while (flags.width - strlen > len
			|| (flags.width - flags.precision > len && flags.precision > 0))
		{
			write(1, "0", 1);
			len++;
		}
	}
	while (flags.width - strlen > len
		|| (flags.width - flags.precision > len && flags.precision > 0))
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}
