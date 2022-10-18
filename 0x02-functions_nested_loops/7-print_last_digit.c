#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - find the last digit
 *
 * @r: our parameter
 *
 * Return: value of last digit
 */
int print_last_digit(int r)
{
	int l = 0;

	if (l == r % 10)
	{
		if (l < 0)
		{
			printf("%d", abs(l));
		}
		printf("%d", l);
	}
	putchar('\n');
	return (l);
}
