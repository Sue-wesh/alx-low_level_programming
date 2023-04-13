#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * interpolation_search - uses interpolation search to find value in sorted arr
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (array)
	{
		while (low <= high)
		{
			pos = low + (((double)(high - low)
				      / (array[high] - array[low]))
				      * (value - array[low]));
			if (pos > (size - 1))
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}
			else
				printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				high = pos - 1;
			else if (array[pos] > value)
				low = pos + 1;
			else
				return (pos);
		}
	}
	return (-1);
}
