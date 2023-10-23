#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 *
 * @dest: the destination of the copy.
 * @src: the source of the copy.
 * @n: the bytes to be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

