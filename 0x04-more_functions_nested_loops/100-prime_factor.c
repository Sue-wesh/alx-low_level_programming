#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor
 *
 * Return: 0 at the end
 */
int main(void)
{
	int i, max;
	long int n = 612852475143;

	for (i = 2; i < sqrt(n); i++)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%d\n", max);

	return (0);
}
