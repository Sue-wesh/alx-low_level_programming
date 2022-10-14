#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all the arguments passed
 * @n: the last parameter
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
