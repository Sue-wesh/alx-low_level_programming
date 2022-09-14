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

	y = n % 10;

	_putchar(y);
	return (0);
}
