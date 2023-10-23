#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the string to be operated.
 * @accept: parameter.
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, b;
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		b = 0;
		p2 = accept;

		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				n++;
				b = 1;
			}
			p2++;
		}
		if (b == 0)
		{
			return (n);
		}

		p1++;
	}
	return (0);
}

