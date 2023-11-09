#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator between strings.
 * @n: number of strings.
 * @...: a variable number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		char *x = va_arg(args, char *);

		if (!x)
		{
			printf("nil");
		}
		else
		{
			printf("%s", x);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
