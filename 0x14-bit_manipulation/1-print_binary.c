#include <stdio.h>

/**
 * print_binary - convert to binary
 * @n: the dec no to be converted
 *
 */
void print_binary(unsigned long int n)
{
	char *x = "";

	if (n == 0)
		printf("0");
	while (n > 0)
	{
		if ((n & 1) == 0)
			x = "0";
		else
			x = "1";
		n >>= 1;
		printf("%s", x);
	}
}
