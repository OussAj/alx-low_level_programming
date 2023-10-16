#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: a variable to be operated.
 * @b: a variable to be operated.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

