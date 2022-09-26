#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print an array in reverse
 * @a: the array elements
 * @n: no of elemts in the array
 */
void reverse_array(int *a, int n)
{
	int i = n;

	while (i > 0)
	{
		if (i != n)
		{
			printf(", ");
		}
		printf("%d", a[i - 1]);
		i--;
	}
	printf("\n");
}
