#include "main.h"

/**
 * swap_int - function to swap two values
 * @a: variable of first value
 * @b: variable of second value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
