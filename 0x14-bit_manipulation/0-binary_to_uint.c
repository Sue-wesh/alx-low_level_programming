#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to decimal
 * @b: points to a string of 0s and 1s
 * 
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, base = 1, rem;

	int num = atoi(b);
	
	if (num != atoi(b))
		return (0);
	while (num > 0)
	{
		rem = num % 10;
		dec += rem * base;
		num = num / 10;
		base = base * 2;
	}
	return (dec);
}
