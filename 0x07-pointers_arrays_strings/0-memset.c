#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: is the destination.
 * @b: the source content.
 * @n: bytes of memory to be filled.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr = (unsigned char) b;
		ptr++;
	}
	return (s);
}

