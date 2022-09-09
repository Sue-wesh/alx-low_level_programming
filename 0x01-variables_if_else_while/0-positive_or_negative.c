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
	int n = 98;

	if ( n > 0 ) {
		printf ("%d is positive\n", n );
	}
	else if ( n ==0 ) {
		printf ("0 is zero\n", n );
	}
	else if ( n < 0 ) {
		printf ("-%d is negative\n",n);
	}
	return (0);

}
