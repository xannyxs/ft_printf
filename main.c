#include "./printf.h"
#include <stdio.h>
#include <limits.h>

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
<<<<<<< HEAD
	ft_print = ft_printf("|| %s ||", NULL);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %s ||", NULL);
=======
	ft_print = ft_printf("|| %d ||", INT_MAX + 1);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %d ||", INT_MAX + 1);
>>>>>>> 77959b1b0cf892d30db20ffcddba48614510cc6c
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}