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
	size_t low = 0, high = size - 1, mid, x;

	if (array)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (x = low; x <= high; x++)
			{
				printf("%d", array[x]);
				if (x < high)
					printf(", ");
			}
			printf("\n");

			mid = low + (high - low) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (-1);
}
