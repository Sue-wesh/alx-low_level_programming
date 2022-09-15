#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print nums 0 through 9
 * except 2 and 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		_putchar(x);
	}
	_putchar('\n');
}
