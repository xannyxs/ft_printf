/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/12 13:47:52 by xander        #+#    #+#                 */
/*   Updated: 2021/09/07 13:03:16 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H
# include "printf.h"

typedef struct s_conversions
{
	char	key;
	int		(*func)(va_list);
}			t_conversions;

#endif