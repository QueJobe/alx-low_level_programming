#include "main.h"

/**
 *  clear_bit - functio to set value of a bit to 0 at given index
 *  @n: binary value
 *  @index: index of bit to be changed
 *  Return: 1 if siccessfull and -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(x << index);

	return (1);
}
