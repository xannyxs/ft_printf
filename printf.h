/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/12 18:16:16 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# define FLAGS "-0"
# define CONV "cspdiuxX%"
# define WIDTH ".*123456789"

// t_flags

struct s_flags
{
	int	width;
	int	precision;
	int	minus_true;
	int	zero_true;
	size_t len;
}		flags;

int		ft_printf(const char *str, ...);

void	ft_putchar_fd(char c, int fd);

char	*ft_strchr(const char *str, int c);

int		conversion(char *str, va_list ap);

int		ft_putnbr_fd(int n, int fd, size_t len);

int		ft_putlong_fd(long n, int fd, size_t len);

int		width(char **str, va_list ap);

int		ft_atoi(const char *str);

int		print_width_int(long long ap);

int		numlen(long long number);

int		print_id(va_list ap);

int		print_s(va_list ap);

int		print_width_str(char *str);

size_t	ft_strlen(char const *str);

char	*ft_strdup(const char *s1);

void	ft_putstr_fd(char *s, int fd);

size_t	print_x(va_list ap, int check);

int		convert_hex(long number, int check);

size_t	print_p(va_list ap);

int		convert_p(unsigned long long number);

size_t	print_u(va_list ap);

size_t	print_c(va_list ap);

void	flag(char **str);

int		ft_isdigit(int argc);

void	ft_putstr_precision(char *s, int fd);

#endif
