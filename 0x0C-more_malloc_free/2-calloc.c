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
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return(NULL);
	}
	memset(s, 0, nmemb * size);
	return (s);
}

