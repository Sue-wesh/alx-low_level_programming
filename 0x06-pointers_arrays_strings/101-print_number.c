#include <stdio.h>
#include "main.h"

/**
 * print_number - integer numbers
 * @n: the number
 * Return:0 at end;
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
