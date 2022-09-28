#include <stdio.h>

/**
 * _pow_recursion - find he power
 * @x: the value we find its power
 * @y: the power value
 * Return: the end result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, (y - 1))));
}
