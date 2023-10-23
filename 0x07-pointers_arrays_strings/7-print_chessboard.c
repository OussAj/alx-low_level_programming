#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row_size = sizeof(a[0]) / sizeof(a[0][0]);
	int i, j;

	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

