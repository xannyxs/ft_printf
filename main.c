/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 14:33:18 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/06/12 18:16:47 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
	WWPD?
	(What would printf do?)
*/

int	main(void)
{
	int				ft_print;
	int				print;
	unsigned int	swag;
	char			*ptr;
	char			c;

	c = 'i';
	ptr = "Xander";
	swag = 4332;
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("%7.6u --", swag);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("%7.6u --", swag);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}
