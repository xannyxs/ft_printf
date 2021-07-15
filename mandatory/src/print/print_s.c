/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_s.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 15:57:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 13:02:34 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../printf.h"

int	print_s(va_list ap)
{
	char	*ptr;
	int 	len;

	len = 0;
	ptr = va_arg(ap, char *);
	if (ptr != NULL)
		len = ft_strlen(ptr);
	if (ptr == NULL)
	{
		ptr = "(null)";
		if (!ptr)
			return (0);
		len = 6;
	}
	ft_putstr_fd(ptr, 1);
	return (len);
}
