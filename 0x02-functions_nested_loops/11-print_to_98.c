#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - display numbers from n to 98
 * @n: the character to be displayed to stdout
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
			printf("%d", n);
		n--;
	}
	while (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n++;
	}
	putchar('\n');
}
