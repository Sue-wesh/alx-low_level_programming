#include "main.h"
#include <stdio.h>

/**
 * times_table - display the 9 timestable
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				printf(",%3d", i * j);
			}
		}
		putchar('\n');
	}
}
