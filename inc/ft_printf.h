/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/24 19:26:37 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/19 15:43:50 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define FLAGS "-0 "
#define CONV "cspdiuxX%"

typedef struct s_flags {
  uint32_t width;
} t_flags;

/*
        LIBFT
*/

void ft_putchar_fd(char c, int fd);

char *ft_strchr(const char *str, int c);

int ft_putnbr_fd(long n, int fd, unsigned int len);

int ft_atoi(const char *str);

size_t ft_strlen(char const *str);

bool ft_isdigit(int argc);

void ft_putstr_fd(char *s, int fd);

/*
        PRINT_
*/

unsigned int print_p(t_flags *flags, va_list ap);

unsigned int print_x(t_flags *flags, va_list ap, bool is_uppercase);

unsigned int print_u(t_flags *flags, va_list ap);

unsigned int print_c(t_flags *flags, va_list ap);

unsigned int print_id(t_flags *flags, va_list ap);

unsigned int print_s(t_flags *flags, va_list ap);

unsigned int print_perc(t_flags *flags, va_list ap);

/*
        SRC
*/

int ft_printf(const char *str, ...);

uint32_t conversion(t_flags *flags, char *str, va_list ap);

int convert_hex(uint64_t number, bool is_uppercase);

int ft_numlen(int n, unsigned int len);

#endif
