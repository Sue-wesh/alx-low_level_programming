#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: return 0
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n % 10 > 5)
	{
		printf("Last digit of,%d,is greater than 5\n",n);
	}
	else if(n % 10 == 0)
	{
		printf("Last digit of,%d,is 0\n",n);
	}
	else if(n % 10 < 6 && n%10 > 0)
	{
		printf("Last digit of,%d,is less than 6 and not 0\n",n);
	}
	return (0);
}
