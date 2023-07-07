#include "main.h"

/**
 * binary_to_uint - function to convert binary digits to decimal
 * @b: pointer to binary characters
 * Return: the coverted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			dec = dec * 2;
		}
		else if (b[i] == '1')
		{
			dec = dec * 2 + 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (dec);
}
