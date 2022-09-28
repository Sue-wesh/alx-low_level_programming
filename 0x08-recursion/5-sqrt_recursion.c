#include <stdio.h>

/**
 * sqrt - finds the square root of given num
 * @n: the given number
 * @x: the guess value
 * Return: the squareroot
 */
int sqrut(int x, int n)
{
	int k = (x + n / x) / 2;

	if (x * x == n)
		return (x);
	else if (n < 0)
		return (-1);
	else
		return (sqrut(k, n));
}
/**
 * _sqrt_recursion - find squareroot
 * @n: the number given
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	return (sqrut(1, n));
}
