#include <stdio.h>

/**
 * array_iterator - executes a function given as a paramete
 * @array: the array
 * @size: the size of the array
 * @action: function pointer placed as argument
 */
void array_iterator(int *array, size_t size, void (*action)())
{
	action(array[i], size);
}
