#include "main.h"
#include <stdio.h>

/**
 * swap_int - functions swaps the value of ints
 * @a: stores val of var int
 * @b: stores value of var int
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
