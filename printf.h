/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/06 13:59:59 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# define CONV "cspdiuxX%"
# define WIDTH "-0123456789"

struct s_flags
{
	int	width;
	int minus_true;
	int zero_true;
}		flags;

int		ft_printf(const char *str, ...);

void	ft_putchar_fd(char c, int fd);

char	*ft_strchr(const char *str, int c);

int		conversion(char *str, va_list ap);

int		ft_putnbr_fd(int n, int fd, size_t len);

int		ft_putlong_fd(long n, int fd, size_t len);

void	width(char **str);

int		ft_atoi(const char *str);

int		print_width(int ap);

int		numlen(int number);

int		print_id(va_list ap);

int		print_s(va_list ap);

int		print_width_str(char *str);

size_t	ft_strlen(char const *str);

char	*ft_strdup(const char *s1);

#endif
