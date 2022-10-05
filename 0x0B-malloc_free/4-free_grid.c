#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2d array created b4
 * @grid: the array
 * @height: the column of the array
 * Return: the end result
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
