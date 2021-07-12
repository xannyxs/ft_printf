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
	ft_print = ft_printf("|| %8s ||", ptr);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("|| %8s ||", ptr);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}
