/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversions.h                                      :+:    :+:            */
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
 	int	(*func)(va_list);
 }		t_conversions;

 t_conversions	s_conversions[] = {
 	{'s', &print_s},
 	{'c', &print_c},
 	{'i', &print_id},
 	{'d', &print_id},
 	{'u', &print_u},
 	{'p', &print_p},
 	{0, NULL}
 };

 #endif
