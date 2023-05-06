#include "main.h"

/**
 * flip_bits - function to return number of bits needed to flip
 * to get one number from another
 * @n: number in binary
 * @m: number in binary
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	unsigned long int x = n ^ m;

	while (x != 0)
	{
		if (x & 1)
		{
			count++;
		}
		x >>= 1;
	}
	return (count);
}
