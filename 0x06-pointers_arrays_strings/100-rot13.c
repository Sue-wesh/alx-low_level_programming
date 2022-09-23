#include <stdio.h>
#include "main.h"
#define ROT 13

/**
 * rot13 -encode string using rot13
 * @c: the array
 * Return: the encoded string
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			if ((c[i] = c[i] + ROT) <= 'Z')
			{
				printf("%s", c);
			}
			else
			{
				c[i] = c[i] - ROT;
				printf("%s", c);
			}
		}
		else if (c[i] >= 'a' && c[i] >= 'z')
		{
			if ((c[i] = c[i] + ROT) <= 'z')
			{
				printf("%s", c);
			}
			else
			{
				c[i] = c[i] - ROT;
				printf("%s", c);
			}
		}
	}
	return (c);
}
