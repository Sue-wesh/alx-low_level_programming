#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings placed as arguments
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_args;
	unsigned int i;

	va_start(str_args, n);
	for (i = 0; i < n; i++)
	{
		int vals = va_arg(str_args, int);

		printf("%d%s", vals, separator);
		putchar('\n');
	}
}
