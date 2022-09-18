#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - absolute value
 *
 * Return: 0
 */
int _abs(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
		y = abs(x);
		putchar(y);
	}
	return (0);
}
