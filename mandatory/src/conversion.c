/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:21:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 15:42:06 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"
#include "../../conversions.h"

int	convert_hex(long long number, int check)
{
	const char	*caps_digits;
	const char	*nocaps_digits;
	size_t		len;

	len = 0;
	caps_digits = "0123456789ABCDEF";
	nocaps_digits = "0123456789abcdef";
	if (number > 15)
		len = convert_hex(number / 16, check) + len;
	number = number % 16;
	if (check == 1)
		write(1, &caps_digits[number], 1);
	else if (check == 0)
		write(1, &nocaps_digits[number], 1);
	len++;
	return (len);
}

int	conversion(char *str, va_list ap)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (g_conversions[i].key)
	{
		if (*str == g_conversions[i].key)
			len = g_conversions[i].func(ap);
		i++;
	}
	if (*str == 'x')
		len = print_x(ap, 0);
	else if (*str == 'X')
		len = print_x(ap, 1);
	else if (*str == '%')
		len = print_perc();
	return (len);
}
