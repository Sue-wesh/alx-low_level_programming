#include <stdio.h>

/**
 * set_bit - set the value 1 at a given index
 * @n: the number given
 * @index: index of bit you want to get
 *
 * Return: 1 if it worked and -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *mask;

	mask = 1 << index;
	return (n & ~mask);
	return (1);
}
