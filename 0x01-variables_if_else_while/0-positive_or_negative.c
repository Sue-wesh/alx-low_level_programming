#include <stdio.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: return 0
 *
 */

int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0 ) {
		printf ("%d is positive\n", n );
	}
	else if ( n1 ==0 ) {
		printf ("%d is zero\n", n1 );
	}
	else if ( n2 < 0 ) {
		printf ("%d is negative\n",n2);
	}
	return (0);

}
