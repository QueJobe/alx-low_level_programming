#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value to pass to function
 * @index: position of bit to change
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
