/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_hex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/19 15:43:03 by xander        #+#    #+#                 */
/*   Updated: 2022/04/19 15:43:39 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	convert_hex(unsigned long number, bool is_uppercase)
{
	const char	*caps_digits;
	const char	*nocaps_digits;
	size_t		len;

	len = 0;
	caps_digits = "0123456789ABCDEF";
	nocaps_digits = "0123456789abcdef";
	if (number > 15)
		len += convert_hex(number / 16, is_uppercase);
	number = number % 16;
	if (is_uppercase == true)
		write(STDOUT_FILENO, &caps_digits[number], 1);
	else if (is_uppercase == false)
		write(STDOUT_FILENO, &nocaps_digits[number], 1);
	len++;
	return (len);
}
