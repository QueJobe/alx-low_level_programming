#include "main.h"

/**
 * print_rev - funtion to print a string in reverse
 *@s: variable to pass string value
 */
void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
