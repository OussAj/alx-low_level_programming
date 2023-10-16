#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int i, l1, l2;
	char t;

	l1 = 0;
	l2 = 0;
	while (s[l1] != '0')
	{
		l1++;
	}

	l2 = l1 - 1;

	for (i = 0 ; i < l1 / 2 ; i++)
	{
		t = s[i];
		s[i] = s[l2];
		s[l2--] = t;
	}
}

