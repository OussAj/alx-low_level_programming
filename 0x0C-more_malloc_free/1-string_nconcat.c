#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the 1st string.
 * @s2: hte 2nd string.
 * @n: number of byte from s2.
 *
 * Return: a pointer to the new space or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat;

		if (s1 != NULL)
		{
			len1 = strlen(s1);
		}
		if (s2 != NULL)
		{
			len2 = strlen(s2);
		}
		if (n >= len2)
		{
			n = len2;
		}
		concat = malloc(len1 + n + 1);

		if (concat == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len1; i++)
		{
			concat[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			concat[i + j] = s2[j];
		}
		concat[i + j] = '\0';

		return (concat);
}

