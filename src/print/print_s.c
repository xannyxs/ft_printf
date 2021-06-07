/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 15:57:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 15:59:22 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

int	print_s(va_list ap)
{
	size_t	len;
	char	*ptr;
	char	*str;

	len = 0;
	ptr = va_arg(ap, char *);
	str = ft_strdup(ptr);
	if (flags.minus_true == 1)
	{
		ft_putstr_fd(ptr, 1);
		len = print_width_str(str) + ft_strlen(ptr);
	}
	else
	{
		len = print_width_str(str) + ft_strlen(ptr);
		ft_putstr_fd(ptr, 1);
	}
	len++;
	return (len);
}
