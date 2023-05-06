#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function to convert binary to integer
 * @b: string to binary input
 * Return: decimal value of binary input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int base = 1;
	int i, j;
	int len = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;

	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			sum += base;
		}
		base *= 2;
	}
	return (sum);
}
