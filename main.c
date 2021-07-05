/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 14:33:18 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/05 23:43:40 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#define INT_MAX 2147483647

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
	ptr = NULL;
	swag = 4332;
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("%i", -2147483648);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("%i", -2147483648);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}
