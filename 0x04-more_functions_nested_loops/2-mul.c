#include "main.h"
/**
 * mul - a function that multiplies two integers.
 *
 * @a: the number to multiply.
 * @b: the number to mltiply by.
 *
 * Return: always 0 (Success).
 */
int mul(int a, int b)
{
	int mult = a * b;

	_putchar((mult / 10) + '0');
	_putchar((mult % 10) + '0');
	_putchar('\n');
	return (0);
}

