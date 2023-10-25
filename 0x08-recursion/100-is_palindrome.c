#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrom(char *s, char *c);
char *rev_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: parameter
 * Return: result
 */
int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
	{
		return (1);
	}
	return (palindrom(s, rev_recursion(s)));
}

/**
 * palindrom - a function that returns 1
 * @s: parameter
 * @c: parameter
 * Return: result
 */
int palindrom(char *s, char *c)
{
	if (*s && *c)
	{
		if (*s != *c)
		{
			return (0);
		}
		return (palindrom(s + 1, c + 1));
	}
	return (1);
}

/**
 * rev_recursion - return the reverse of a string
 * @s: parameter
 * Return: result
 */
char *rev_recursion(char *s)
{
	char *p = malloc(strlen(s) + 1);

	if (*s)
	{
		char *rev = rev_recursion(s + 1);

		strcpy(p, rev);
		p[strlen(rev)] = *s;
		return (p);
	}
	return (p);
}

