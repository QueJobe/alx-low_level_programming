#include "main.h"

/**
 * get_bit - function to find value of bit at given index
 * @n: binary digits
 * @index: index of value to return
 * Return: bit at specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	while (count < index)
	{
		n >>= 1;
		count++;
	}
	return (n & 1);
}
