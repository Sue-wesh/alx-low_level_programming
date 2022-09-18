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
			printf("%d", i * j);
			if (j < 9)
			{
				printf(",  ");
			}
		}
		putchar('\n');
	}
}
