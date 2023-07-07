#include "main.h"

/**
 * set_bit -sets the value of a bit to 1 at a given index
 * @n: value to be changed
 * @index: loction of bit to be changed
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = 1 << index;
	*n |= mask;
	return (1);
}
