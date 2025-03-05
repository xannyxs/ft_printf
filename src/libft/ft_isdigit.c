/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 19:50:34 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/04/18 23:07:38 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isdigit(int argc)
{
	if (argc < '0' || argc > '9')
		return (false);
	return (true);
}
