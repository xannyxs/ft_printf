/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ../ft_printf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/12 13:47:52 by xander        #+#    #+#                 */
/*   Updated: 2022/01/24 15:21:14 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
 # define CONVERSIONS_H
 # include "printf.h"

typedef struct s_conversions
{
	char key;
	unsigned int	(*func)(t_flags *, va_list);
}	t_conversions;

 #endif
