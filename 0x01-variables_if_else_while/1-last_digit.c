#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 *
 * main - entrypoint
 *
 * Return: return 0
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n%10 > 5)
	{
		printf("Last digit of,%d,is greater than 5");
	}
	else if(n%10 == 0)
	{
		printf("Last digit of,%d,is 0");
	}
	else if(n%10 < 6 && n!<0)
	{
		printf("Last digit of,%d,is less than 6 and not 0");
	}
	return (0);
}
