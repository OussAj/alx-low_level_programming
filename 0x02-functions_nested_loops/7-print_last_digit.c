#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number to operate.
 *
 * Return: returns the last digit of n.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	return (ld);
}

