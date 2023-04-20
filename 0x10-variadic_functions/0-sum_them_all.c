#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to calculate sum
 * @n: number of arguments
 * Return: calculated sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i, add = 0;

	va_start(op, n);

	for (i = 0; i < n; i++)
		add += va_arg(op, int);

	va_end(op);

	return (add);
}
