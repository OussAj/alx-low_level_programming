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
	int *s, i = 0, n, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min;
	s = malloc(sizeof(int) * n);
	if (s == NULL)
	{
		return(NULL);
	}
	while (i <= n)
	{

