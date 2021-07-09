/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 17:07:28 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# define FLAGS "-0 "
# define CONV "cspdiuxX%"
# define WIDTH ".*123456789"

struct s_flags
{
	int		width;
	int		precision;
	int		minus_true;
	int		zero_true;
	int		negative_true;
	size_t	len;
}			t_flags;

/*
	LIBFT
*/

void	ft_putchar_fd(char c, int fd);

char	*ft_strchr(const char *str, int c);

int		ft_putnbr_fd(long n, int fd, size_t len);

int		ft_putlong_fd(long n, int fd, size_t len);

int		ft_atoi(const char *str);

size_t	ft_strlen(char const *str);

int		ft_isdigit(int argc);

void	ft_putstr_fd(char *s, int fd);

char	*ft_strdup(const char *s1);

/*
	PRINT_
*/

int		print_p(va_list ap);

int		print_x(va_list ap, int check);

int		print_u(va_list ap);

int		print_c(va_list ap);

int		print_id(va_list ap);

int		print_s(va_list ap);

void	print_null(void);

size_t	print_perc(void);

/*
	SRC
*/

int		ft_printf(const char *str, ...);

int		conversion(char *str, va_list ap);

void	check_precision_width(char **str, va_list ap);

int		print_width_int(long long ap);

int		numlen(long long number);

int		print_width_str(char *str);

int		convert_hex(long long number, int check);

void	flag(char **str);

void	ft_putstr_precision(char *s, int fd);

int		print_width_unsigned(unsigned long long ap);

int		unsigned_numlen(unsigned long long number);

int		remaining(int numlen);

#endif
