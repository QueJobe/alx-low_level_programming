#include "main.h"

/**
 * _puts - function to print a string
 * @str: pointer to pass the string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
