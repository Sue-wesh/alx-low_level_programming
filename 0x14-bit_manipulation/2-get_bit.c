#include <stdio.h>

/**
 * get_bit - return the value of a bit at a given index
 * @n: the number given
 * @index: index of bit you want to get
 *
 * Return: value of bit at index index or -1 in case of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		printf("1");
	else
		printf("0");
	return ;
}
