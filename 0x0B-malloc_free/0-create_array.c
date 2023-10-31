#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: parameter.
 * @c: parameter.
 *
 * Return: a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *s = malloc(size);

	if (s == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}

