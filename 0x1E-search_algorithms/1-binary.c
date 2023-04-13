#include "search_algos.h"
/**
 * binary_search - search sorted array for value using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, x = 0;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array:");
			for (x = left; x <= right; x++)
				printf("%d, ", array[x]);
			printf("%d\n", array[x]);

			x =  (right + left) / 2;
			if (array[x] > value)
				right = x - 1;
			else if (array[x] < value)
				left = x + 1;
			else
				return (x);
		}
	}
	return (-1);
}
