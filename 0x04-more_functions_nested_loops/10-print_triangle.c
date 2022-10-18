#include <stdio.h>

/**
 * print_triangle - print a triangle
 * @size :  size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size <= 0)
			{
				putchar('\n');
			}
			else
				putchar('#');
		}
		putchar('\n');
	}
}
