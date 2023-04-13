#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * norm_search - search through an array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * @min: where to start
 *
 * Return: first index where value is located
 * otherwise -1
 */
size_t norm_search(int *array, size_t size, int value, size_t min)
{
	for (; min <= size; min++)
	{
		printf("Value checked array[%lu] = [%d]\n", min, array[min]);
		if (array[min] == value)
			return (min);
	}
	return (-1);
}
/**
 * jump_search - searches for a value in sorted array using jump search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t max = 0, jump = sqrt(size), min = 0;
	int res = -1;

	if (array)
	{
		while (max <= size - 1)
		{
			if (value <= array[max])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", min, max);
				res = norm_search(array, max, value, min);
				if (res > 0)
					return (res);
			}
			min = max;
			max += jump;
			norm_search(array, min, value, min);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", min, max);
		res = norm_search(array, size - 1, value, min);
		if (res > 0)
			return (res);
	}
	return (-1);
}
