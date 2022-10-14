#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		int numbers = va_arg(ap, unsigned int);
		if (i < n - 1)
			printf("%d%s", numbers, separator);
		else
			printf("%d", numbers);
	}
	va_end(ap);
	putchar('\n');
}
