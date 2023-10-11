#include "main.h"
/**
 * add - a function that adds two integers and returns the result.
 *
 * @n: The first integer to be added.
 * @i: The second integer to be added.
 *
 * Return: the value of sum.
 */
int add(int n, int i)
{
	int sum;
	sum = n + i;

	_putchar(sum / 10 + '0');
	_putchar(sum % 10 + '0');
	return (sum);
}

