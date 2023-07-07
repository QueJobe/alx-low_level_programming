#include "main.h"

/**
 * get_bit - function to find specified bit
 * @n: bit to be searched for
 * @index: location of the bit
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
