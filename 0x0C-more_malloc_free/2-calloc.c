#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include<stdio.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @soze: size of each element.
 *
 * Return: a pointer to the memory or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);

	return (p);
}

