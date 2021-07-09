/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 15:07:11 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:49:41 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}
