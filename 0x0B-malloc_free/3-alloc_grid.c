#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print a 2d array
 * @width: row of the array
 * @height: column of the array
 * Return: null if it fails
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	a = malloc(width * sizeof(int));
	if (width || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(height * sizeof(int));
	}
	return (a);
}
