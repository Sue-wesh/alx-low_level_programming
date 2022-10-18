#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - absolute value
 * @x: the value we find abs
 * Return: 0
 */
int _abs(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
		y = abs(x);
		return (y);
	}
	else if (x >= 0)
		return (x);
	return (0);
}
