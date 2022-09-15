#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - find the last digit
 *
 * @n: our parameter
 *
 * Return: 0 at the end
 */
int print_last_digit(int n)
{
	int y;
	if ((n > 0) || (n < 0))
	{
		y = n % 10;
		_putchar(y);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
