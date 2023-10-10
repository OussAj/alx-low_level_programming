#include "main.h"
/**
 * print_alphabet - a function that print alphabet in lowercase
 * return: always 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
