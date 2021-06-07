/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 14:33:18 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/07 15:31:50 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
	WWPD?
	(What would printf do?)
*/

int	main(void)
{
	int				i;
	int				j;
	unsigned int	swag;
	char			*ptr;
	char			c;

	c = 'i';
	ptr = "Xander";
	swag = 4845;
	printf("\n--- FT_PRINTF ---\n\n");
	i = ft_printf("Hallo %9s, %6u, %s, %10s", ptr, swag, ptr, ptr);
	printf("\n\n--- PRINTF ---\n\n");
	j = printf("Hallo %9s, %6u, %s, %10s", ptr, swag, ptr, ptr);
	printf("\n\n");
	printf("ft_printf return: %d\n", i);
	printf("printf return: %d\n", j);
	return (0);
}
