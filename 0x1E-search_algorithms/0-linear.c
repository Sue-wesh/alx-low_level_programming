#include "search_algos.h"

/**
 * linear_search - search for value using linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if array is NULL or value not in array
 * otherwise return first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array)
	{
		for (x = 0; x < size; x++)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (value == array[x])
				return (x);
		}
	}
	return (-1);
}
