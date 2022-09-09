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
	int n1 = 0;
	int n2 = -98;

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
