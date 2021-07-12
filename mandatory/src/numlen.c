/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   numlen.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 18:15:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/12 13:26:31 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	numlen(long long number)
{
	int	len;

	len = 0;
	if (number > 9 || number < -9)
		len = numlen(number / 10) + len;
	if (number > -9 && number < 0)
		len++;
	len++;
	return (len);
}

int	unsigned_numlen(unsigned long long number)
{
	int	len;

	len = 0;
	if (number > 9)
		len = unsigned_numlen(number / 10) + len;
	len++;
	return (len);
}
