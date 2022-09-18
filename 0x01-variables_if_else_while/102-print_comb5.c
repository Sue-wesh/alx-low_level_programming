#include <stdio.h>

/**
 * main - Entrypoint
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 00; x <= 98; x++)
	{
		int y;

		for (y = 00; y <= 99; y++)
		{
			if ((x == 01 && y == 00) || (x == y))
			{
				continue;
			}
			else if (x == 98 && y == 99)
			{
				printf("%d %d", x, y);
			}
			else
			{
				printf("%d %d, ", x, y);
			}
		}
	}
	putchar ('\n');
	return (0);
}
