/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   width.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:40:20 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 15:27:20 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	width(char **str)
{
	if (*str[0] == '-')
	{
		flags.minus_true = 1;
		(*str)++;
	}
	else if (*str[0] == '0')
	{
		flags.zero_true = 1;
		(*str)++;
	}
	flags.width = ft_atoi(str[0]);
	while (*str[0] >= '0' && *str[0] <= '9')
		(*str)++;
}

int	print_width_int(int ap)
{
	int	len;

	len = 0;
	while (flags.width - numlen(ap) > len && flags.zero_true == 1)
	{
		write(1, "0", 1);
		len++;
	}
	while (flags.width - numlen(ap) > len)
	{
		write(1, " ", 1);
		len++;
	}
	len--;
	return (len);
}

int	print_width_str(char *str)
{
	int	len;
	int		strlen;

	len = 0;
	strlen = ft_strlen(str);
	while (flags.width - strlen > len && flags.zero_true == 1)
	{
		write(1, "0", 1);
		len++;
	}
	while (flags.width - strlen > len)
	{
		write(1, " ", 1);
		len++;
	}
	len--;
	return (len);
}
