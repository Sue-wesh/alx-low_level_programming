#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: return 0 at end
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}
