#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - entrypoint
 *
 * Return: zero at the end
 *
 */

int main(void)
{
	int a, b, c;
	int arr[3];

	putchar("Enter the first number : ");
        scanf("%d", &arr[0]);

        putchar("Enter the second number : ");
        scanf("%d", &arr[1]);

        putchar("Enter the third number : ");
        scanf("%d", &arr[2]);

	for(a = 0; a<3; a++)
	{
		for(b = 0; b < 3; b++)
		{
			for(c = 0; c < 3; c++)
				putchar("%d %d %d", arr[a],arr[b],arr[c]);
		}
	}
	return (0);
}
