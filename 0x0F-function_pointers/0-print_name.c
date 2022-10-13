#include <stdio.h>

/**
 * print_name - print a name
 * @name: var for the name
 * @f: function pointer used as argument
 *
 */
void print_name(char *name, void (*f)())
{
	f(name);
}
