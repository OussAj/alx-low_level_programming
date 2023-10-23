#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 * @a: parameter
 * @size: parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + (i + 1) * size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}

