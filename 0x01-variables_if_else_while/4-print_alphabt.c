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
	int x = 'a';

	do {
		if ((x == 'q') || (x == 'e'))
		{
			continue;
		}
	}
	while (x <= 'z')
	{
		x++;
	}
	return (0);
}
