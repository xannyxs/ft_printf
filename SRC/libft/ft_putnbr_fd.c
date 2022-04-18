/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 14:58:40 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 13:09:34 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_putnbr_fd(int n, int fd, unsigned int len)
{
	long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
		len++;
	}
	if (i > 9)
	{
		len = ft_putnbr_fd(i / 10, fd, len);
		len = ft_putnbr_fd(i % 10, fd, len);
	}
	else
	{
		i = i + '0';
		write(fd, &i, 1);
		len++;
	}
	return (len);
}
