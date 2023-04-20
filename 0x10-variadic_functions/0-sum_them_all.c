#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to calculate sum
 * @n: number of arguments
 * Return: calculated sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add;

	va_list op;

	va_start(op, n);

	if (n == 0)
		return (0);

	add = 0;
	for (i = 0; i < n; i++)
		add += va_arg(op, int);

	va_end(op);
	return (add);
}
