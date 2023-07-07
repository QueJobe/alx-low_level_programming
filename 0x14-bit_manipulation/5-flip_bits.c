#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: value passed to function
 * @m: value paased to function
 * Return:the number of bits you would need to
 * flip to get from one number to anothe
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xorbits = n ^ m;

	while (xorbits != 0)
	{
		count += xorbits & 1;
		xorbits >>= 1;
	}

	return (count);
}
