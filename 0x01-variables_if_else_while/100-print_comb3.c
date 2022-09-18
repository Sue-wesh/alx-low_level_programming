#include <stdio.h>

/**
 * main - combinations of two digits
 * Return: return 0 at the end
 */
int main(void)
{
	int x;

	for (x = 0; x < 90; x++)
	{
		int f = x / 10;
		int l = x % 10;

		if (f == l || l == 0)
		{
			continue;
		}
		else
		{
			printf("%d", x);
		}
	}
	putchar('\n');
	return (0);
}
