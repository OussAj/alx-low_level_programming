#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number to operate.
 *
 * Return: returns the last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

