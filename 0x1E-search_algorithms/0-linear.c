#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
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
	if (array)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
