#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal line using '\'
 * @n: the number of times/ lines
 * Return: 0 at the end
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			printf("%d", '*');
		}
		else if (i == 1)
		{
			printf("%1d", '*');
		}
		else if (i == n)
		{
			printf("%d", '*');
		}
		else if (n <= 0)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
