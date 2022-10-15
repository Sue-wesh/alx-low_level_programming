#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	vfprintf(stdout, format, args);

	va_end(args);
	putchar('\n');
}
