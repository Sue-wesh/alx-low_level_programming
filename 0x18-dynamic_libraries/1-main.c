#include <stdio.h>
#include "header.h"

/**
 * main - main file
 *
 * Return: 0 at end
 */
int main(void)
{
	int a = 66, b = -76;
	add(a, b);
	sub(a, b);
	mul(a, b);
	div(a, b);
	mod(a, b);

	return 0;
}
