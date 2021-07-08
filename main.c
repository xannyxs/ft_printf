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
	ptr = "Tijmen";
	swag = 4332;
	printf("\n--- FT_PRINTF ---\n\n");
	ft_print = ft_printf("%15p", ptr);
	printf("\n\n--- PRINTF ---\n\n");
	print = printf("%15p", ptr);
	printf("\n\n");
	printf("ft_printf return: %d\n", ft_print);
	printf("printf return: %d\n", print);
	return (0);
}
