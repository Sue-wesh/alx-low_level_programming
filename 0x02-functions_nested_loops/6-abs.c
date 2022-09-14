#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - find the absolute value of an integer
 *
 * @a: our parameter
 *
 * Return: 0
 */
int _abs(int a)
{
	int x;

	if (a < 0)
	{
		x = abs(a);
		_putchar(x);
	}
	else
	{
		_putchar(a);
	}
	return (0);
}
