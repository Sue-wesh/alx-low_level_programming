#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x == 'q') || (x == 'e'))
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
