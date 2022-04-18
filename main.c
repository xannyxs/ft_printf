/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/18 11:50:39 by xander        #+#    #+#                 */
/*   Updated: 2022/04/18 13:11:39 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

/*
	WWPD?
	(What would printf do?)
*/

int	main(void)
{
	int				i;
	int				ft_print;
	int				print;
	char			*ptr;
	char			c;

	i = 1;
	c = 'i';
	ptr = "Xander";
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %s ||", (char *) NULL);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %s ||", (char *) NULL);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %d ||", INT_MAX);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %d ||", INT_MAX);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %i ||", INT_MIN);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %i ||", INT_MIN);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %p ||", NULL);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %p ||", NULL);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %x ||", INT_MAX);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %x ||", INT_MAX);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %X ||", 50);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %X ||", 50);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
		printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %u ||", 50);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %u ||", 50);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %u ||", -50);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %u ||", -50);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %s & %s ||", "Xander", "Swenne");
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %s & %s ||", "Xander", "Swenne");
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %c ||", 'i');
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %c ||", 'i');
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %u & %x ||", -50, -50);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %u & %x ||", -50, -50);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);

	i++;
	printf("\n--- TEST %d ---", i);
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("|| %%%% ||");
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %%%% ||");
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}
