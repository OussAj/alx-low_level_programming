#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - a function that prints anything.
 * @format: type of arguments.
 * @...: a variable number or arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int n = strlen(format);
	char *separator = "";

	va_start(args, format);
	if (format)
	{
		while (i < n)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
				{
					char *x = va_arg(args, char *);

					printf("%s%s", separator, (x ? x : "(nil)"));
					break;
				}
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		printf("\n");
	}
	va_end(args);
}

