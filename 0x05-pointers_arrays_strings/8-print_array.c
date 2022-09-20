#include <stdio.h>
#include "main.h"

/**
 * print_array- print the elements of an array
 * @a: pointer to the array
 * @n: no of elements
 */
void print_array(int *a, int n)
{
	int i;
	n = sizeof(a);

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
