/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/05/25 21:46:01 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);

char	*ft_strchr(const char *str, int c);

size_t  check_perc(char **str, va_list ap, size_t len);

void	ft_putstr_fd(char *s, int fd);

size_t	ft_strlen(char const *str);

int 	ft_putnbr_fd(int n, int fd, size_t len);

void	ft_putstr_fd(char *s, int fd);

void	ft_putchar_fd(char c, int fd);

int 	ft_putlong_fd(unsigned int n, int fd, size_t len);

void    ft_converthex_nocaps(unsigned long long number);

void    ft_converthex_caps(unsigned long long number);

void    ft_converthex_p(unsigned long long number);

int     ft_conversion(char **str, va_list ap, size_t len);

int     ft_intconversion(char **str, int number, size_t len);

int		ft_padding(char *str, int number, size_t len);

int     convert_s(va_list ap);

int     convert_id(va_list ap);

int     convert_c(va_list ap);

int     convert_perc(int i);

int     convert_u(va_list ap);

int		ft_atoi(const char *str);

#endif
