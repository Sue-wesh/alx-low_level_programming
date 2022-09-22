#include <stdio.h>
#include "main.h"

/**
 * print_line - print a straight line
 * @n: the number of times character _ should be printed
 * Return: 0 at the end
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		putchar('_');

		if (n <= 0)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
