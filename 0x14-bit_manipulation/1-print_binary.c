#include "main.h"

/**
 * print_binary - function to print binary digits
 * @n: decimal value to be converted
 * Return: void returns nothing
 */

void print_binary(unsigned long int n)
{
	int len = sizeof(unsigned long int) * 8;
	int signbit = 0;
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		unsigned long int mask = (unsigned long int)1 << i;

		if ((n & mask) != 0)
		{
			_putchar('1');
			signbit = 1;
		}
		else if (signbit)
		{
			_putchar('0');
		}
	}
	if (!signbit)
	{
		_putchar('0');
	}
}
