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
<<<<<<< HEAD
	int a;

	if (n == 98)
	{
		a = n % 10;
		_putchar(a);
		else if (n == 0)
		{
			a = n % 10;
			_putchar(a);
			else if (n == -1024)
			{
				a = n % 10;
				_putchar(a);
				else if (n == 4)
				{
					a = n % 10;
					_putchar(a);
				}
			}
		}
=======
	int y;
	if ((n > 0) || (n < 0))
	{
		y = n % 10;
		_putchar(y);
	}
	else
	{
		_putchar(n);
>>>>>>> 36c06f13edff1a1f83624a9828520c4c3db905a5
	}
	return (0);
}
