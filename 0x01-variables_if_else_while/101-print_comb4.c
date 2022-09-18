#include <stdio.h>
/**
 * main - combinations of two digits
 * Return: return 0 at the end
 */
int main(void)
{
	int x;

	for (x = 0; x < 790; x++)
	{
		for (x = 0; x < 790; x++)
		{
			for (x = 0; x < 790; x++)
			{
				int f = x / 10;
				int l = x % 10;

				if (x == 120 || 102 || 021 || 201 || 210)
				{
					continue;
				}
				else if (f == l || l == 0)
				{
					continue;
				}
				else if (x == 789)
				{
					printf("%d", x);
				}
				else
				{
					printf("%d, ", x);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
