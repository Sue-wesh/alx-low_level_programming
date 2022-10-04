#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: the character that will be iniltialized in string
 *
 * Return: NULL if it fails or return 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
		while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
