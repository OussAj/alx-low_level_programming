#include "main.h"
/**
 * print_square - a function that prints a square.
 *
 * @size: size of the square.
 */
void print_square(int size)
{
	int d, l;

	if (size > 0)
	{
		for (l = 0 ; l <= size ; l++)
		{
			for (d = 0 ; d <= size ; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

