#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix of integers
 * @a: the array
 * @size: size of array
 * @sum: sum
 * Return: end result
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[j];
			}
		}
	}
	printf("%d", sum);
	putchar('\n');
}
