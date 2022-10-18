#include <stdio.h>

/**
 * print_square - print a square
 * @size : size of the square
 */
void print_square(int size)
{
	int i, j;                                       
	for (i = 0; i < size; i++)                          
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				putchar('\n');
			}
			else
			{
				putchar('#');
			}

		}
		putchar('\n');
	} 
}
