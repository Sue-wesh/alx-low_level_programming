#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize words in a string
 * @c: the string array
 * Return: the end result
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				printf("%d", c[i]);
			}
		}
		else if (c[i - 1] == ' ' || c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				printf("%d", c[i]);
			}
		}
		else if (c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				printf("%d", c[i]);
			}
		}
	}
	return (c);
}
