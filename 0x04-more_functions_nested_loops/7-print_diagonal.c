#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal line using '\'
 * @n: the number of times/ lines
 * Return: 0 at the end
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				putchar(92);
			}
			putchar(' ');
		}
		putchar('\n');
	}
}
