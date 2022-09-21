#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print an array in reverse
 * @a: the array elements
 * @n: no of elemts in the array
 */
void reverse_array(int *a, int n)
{
	int x, f;

	x = 0;
	while (x < n)
	{
		f = a[x];
		a[x] = a[n];
		a[n] = f;
		x++;
		n--;
	}
}
