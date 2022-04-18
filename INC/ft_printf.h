/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ../ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 11:20:34 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdbool.h>
# include <stdarg.h>
# include <stddef.h>

# define FLAGS "-0 "
# define CONV "cspdiuxX%"
# define WIDTH ".*123456789"

struct s_flags
{
	int		width;
	int		precision;
	bool	is_minus;
	bool	is_zero_fill;
	bool	is_negative;
}			t_flags;

/*
	LIBFT
*/

void	ft_putchar_fd(char c, int fd);

char	*ft_strchr(const char *str, int c);

int		ft_putnbr_fd(long n, int fd, unsigned int len);

int		ft_atoi(const char *str);

size_t	ft_strlen(char const *str);

int		ft_isdigit(int argc);

void	ft_putstr_fd(char *s, int fd);

/*
	PRINT_
*/

unsigned int	print_p(va_list ap);

unsigned int	print_x(va_list ap, bool is_uppercase);

unsigned int	print_u(va_list ap);

unsigned int	print_c(va_list ap);

unsigned int	print_id(va_list ap);

unsigned int	print_s(va_list ap);

unsigned int	print_perc(void);

/*
	SRC
*/

int		ft_printf(const char *str, ...);

unsigned int	conversion(char c, va_list ap);

int		convert_hex(unsigned long number, bool is_uppercase);

int		print_width_unsigned(unsigned long long ap);

int		unsigned_numlen(unsigned long long number);

#endif
