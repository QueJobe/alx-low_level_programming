#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: comma to separate the numbers
 * @n: count of numbers to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int x;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		printf("%d", x);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
