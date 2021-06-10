/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_str.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:37:27 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/10 16:05:07 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_width_str(char *str)
{
	int	len;
	int	strlen;

	len = 0;
	strlen = ft_strlen(str);
	while (flags.width - strlen + flags.precision > len && flags.zero_true == 1)
	{
		write(1, "0", 1);
		len++;
	}
	while (flags.width - strlen > len || flags.width - flags.precision > len)
	{
		write(1, " ", 1);
		len++;
	}
	len--;
	return (len);
}
