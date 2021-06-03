/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 18:15:49 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/05/30 20:17:08 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	numlen(int number)
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
