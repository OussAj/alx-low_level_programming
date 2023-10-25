#include "main.h"
int prime_number(int n, int i);
/**
 * is_prime_number -  a function that returns 1 if the input integer prime
 * @n: paremeter
 * Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}
/**
 * prime_number - a fucntion returns 1 if n prime, otherwise O
 * @n: parameter
 * @i: parameter
 * Return: result
 */
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n, i - 1));
}

