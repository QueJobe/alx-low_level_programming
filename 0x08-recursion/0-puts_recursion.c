#include "main.h"

/**
 * _puts_recursion - fuction to print string with recursion
 * @s: Pointer the the string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
