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

	if ( n > 0 ) {
		printf ("%d\n",n, "is positive");
	}
	else if ( n ==0 ) {
		printf ("%d\n",n, "is zero");
	}
	else if ( n < 0 ) {
		printf ("%d\n",n, "is negative");
	}
	return (0);

}
