#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - find the last digit
 *
 * @r: our parameter
 *
 * Return: value of last digit
 */
int print_last_digit(int r)
{
	int l;

	l = r % 10;
	printf("%d", l);
	
	return(0);
}
