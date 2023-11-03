#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: parameter.
 * @max: parameter.
 * 
 * Return: a pointer to the new array or NULL.
 */
int *array_range(int min, int max)
{
	int *p, i = 0, s;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;
	p = (int *) malloc(s * sizeof(int));
	if (!p)
	{
		return (NULL)

	}
	while (max >= min)
	{
		*(p + i) = min++;
		i++;
	}
	return (p);
}

