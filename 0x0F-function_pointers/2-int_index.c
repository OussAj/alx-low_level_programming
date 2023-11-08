#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array to be operated.
 * @size: number of elements of the array.
 * @cmp: the function to be used to compare values.
 *
 * Return: an index to the element or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res, i;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
		{
			return (i);
		}
	}
	return (-1);
}

