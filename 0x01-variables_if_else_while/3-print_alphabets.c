#include <stdio.h>


/* betty style doc for function main goes there */

/**
 *
 * main - entrypoint
 *
 * Return: return 0
 *
 */


int main(void)
{
	int x;
	
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y<= 'Z'; y++)
		putchar(y);
	return(0);

}
