#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print an array in reverse
 * @a: the array elements
 * @n: no of elemts in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, f;

	while (i < n)
	{
		f = a[i];
		a[i] = a[n];
		a[n] = f;
		i++;
		n--;	
	}
}
