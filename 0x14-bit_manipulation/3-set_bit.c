#include "main.h"

/**
 * set_bit - function to set value of a bit to 1 at
 * any given index
 * @n: binary digits
 * @index: given index to incert bit
 * Return: 1 if successful and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int base = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (base << index);
	return (1);
}
