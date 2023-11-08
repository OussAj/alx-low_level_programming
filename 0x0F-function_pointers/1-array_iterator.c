#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on an array.
 * @array: parameter.
 * @size: size of the array.
 * @action: a pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && action && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

