#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes.
 *
 * Return: a pointer to the memory or exit with 98.
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}

