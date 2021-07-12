/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putlong_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 14:58:40 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 14:37:31 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putlong_fd(long n, int fd, size_t len)
{
	long	i;

	i = n;
	if (i > 9)
	{
		len = ft_putlong_fd(i / 10, fd, len);
		len = ft_putlong_fd(i % 10, fd, len);
	}
	else
	{
		i = i + '0';
		write(fd, &i, 1);
		len++;
	}
	return (len);
}
