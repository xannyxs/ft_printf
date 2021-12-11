/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_width_str.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:37:27 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:38:41 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

int	print_width_str(char *str)
{
	int	len;
	int	strlen;

	len = 0;
	strlen = ft_strlen(str);
	if (t_flags.precision < 0)
		strlen = 0;
	if (t_flags.zero_true == 1)
	{
		while (t_flags.width - strlen > len
			|| (t_flags.width - t_flags.precision > len
				&& t_flags.precision > 0))
		{
			write(1, "0", 1);
			len++;
		}
	}
	while (t_flags.width - strlen > len
		|| (t_flags.width - t_flags.precision > len && t_flags.precision > 0))
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}
