#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function to print string
 * @separator: print separator charactor
 * @n: numbers of arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	const char *s;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(op, const char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(op);
}
