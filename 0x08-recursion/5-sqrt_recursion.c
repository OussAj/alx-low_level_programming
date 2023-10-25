#include "main.h"
int sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural square root of n
 * @n: paremeter
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion -  a function that return square root of n
 * @n: parameter
 * @i: paremeter
 * Return: result
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}

