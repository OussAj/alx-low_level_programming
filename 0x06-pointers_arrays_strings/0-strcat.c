#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest: first string.
 * @src: second string.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0 ; i < slen ; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}

