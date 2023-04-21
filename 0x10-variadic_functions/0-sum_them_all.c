#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to calculate sum
 * @n: number of arguments
 * Return: calculated sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, add = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		add += va_arg(num, int);

	va_end(num);

	return (add);
}
