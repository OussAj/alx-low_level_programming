#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: parameter.
 * @c: parameter.
 *
 * Return: a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}

