#include "printf.h"

int main()
{
	int i;
	int j;
	unsigned int swag;
	char *ptr;
	char c;

	c = 'i';
	ptr = "Xander";
	swag = -33;
	printf("\n--- FT_PRINTF ---\n\n");
	i = ft_printf("%5u", swag);
	printf("\n\n--- PRINTF ---\n\n");
	j = printf("%5u", swag);
	printf("\n\n");
	printf("ft_printf return: %d\n", i);
	printf("printf return: %d\n", j);
	return (0);
}
 