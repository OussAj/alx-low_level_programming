#include "main"
/**
 * times_table - a function that prints the 9 times table.
 */
void times_table(void)
{
	int n, i;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (i = 1 ; i <= 9 ; i++)
		{
			_putchar((n * i) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}

