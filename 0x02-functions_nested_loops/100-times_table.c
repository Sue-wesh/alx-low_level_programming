#include <stdio.h>
#include "main.h"

/**
 * print_times_table - shows a times table
 * @n: the type eg 9 times table
 * Return: the end result
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i < n)
			{
				printf("%3d,", i * j);
			}
			else
			{
				printf("%3d", i * j);
			}
		}
		putchar('\n');
	}
}
