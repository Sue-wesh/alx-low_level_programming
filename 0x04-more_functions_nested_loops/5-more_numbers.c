#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print nums 0 through 14
 * 10 times
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar(i);
		i++;
	}
}
