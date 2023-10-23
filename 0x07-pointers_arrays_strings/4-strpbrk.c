#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		p2 = accept;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				return (p1);
			}
			p2++;
		}
		p1++;
	}
	return (NULL);
}

