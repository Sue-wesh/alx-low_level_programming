#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - absolute value
 *
 * @n: our parameter
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		n = abs(-n);
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
