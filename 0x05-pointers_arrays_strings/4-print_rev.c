#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, l;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

