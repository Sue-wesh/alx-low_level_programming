#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: return 0
 *
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(str(x) + "\n");
	return (0);
}
