#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <time.h>

/**
 * positive_or_negative - print +ve or -ve num on the stdout
 *
 * @i: the character we print
 *
 * Return: return 0 at the end
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
}
