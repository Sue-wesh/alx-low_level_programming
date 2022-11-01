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
	unsigned int dec = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec <<= 1;
		if (*b & 1)
			dec += 1;
		b++;
	}
	return (dec);
}
