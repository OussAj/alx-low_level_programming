#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: th destination string.
 * @src: the source string.
 * @n: bytes from src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen, i;

	dlen = 0;
	slen = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[slen] != '\0')
	{
		slen++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}

