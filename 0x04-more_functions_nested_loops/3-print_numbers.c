#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print nums 0 through 9
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
