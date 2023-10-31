#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new copied string.
 * @str: the string to be copied.
 *
 * Return: a pointer to the new string or NULL.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = (char *) malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		*(s + i) = *(str + i);
		i++;
	}
	s[i] = '\0';
	return (s);
}
