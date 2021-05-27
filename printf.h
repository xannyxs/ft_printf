/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/05/27 17:14:09 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define CONV "cspdiuxX%"

int		ft_printf(const char *, ...);

void	ft_putchar_fd(char c, int fd);

char	*ft_strchr(const char *str, int c);

int     conversion(char *str, va_list ap);

int     ft_putnbr_fd(int n, int fd, size_t len);

#endif
