#include "printf.h"

/*
	WWPD?
	(What would printf do?)
*/

int main()
{
	int i;
	int j;
	unsigned int swag;
	char *ptr;
	char c;

	c = 'i';
	ptr = "Xander";
	swag = 482;
	printf("\n--- FT_PRINTF ---\n\n");
	i = ft_printf("%-8s --", ptr);
	printf("\n\n--- PRINTF ---\n\n");
	j = printf("%-8s --", ptr);
	printf("\n\n");
	printf("ft_printf return: %d\n", i);
	printf("printf return: %d\n", j);
	return (0);
}
