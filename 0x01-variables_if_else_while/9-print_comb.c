#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - combinations of two digits
 *
 * Return: return 0 at the end
 *
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 9)
		{
			printf("%d, ", x);
		}
		else
		{
			printf("%d", x);
		}
	}
	putchar('\n');
	return (0);
}
