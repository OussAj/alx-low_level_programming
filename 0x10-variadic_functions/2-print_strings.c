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
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		char *str = va_arg(ap, char *);

		printf("%s", (!str) ? ("(nil)") : str);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

