#include "main.h"

/**
 * _puts_recursion - fuction to print string with recursion
 * @s: Pointer the the string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
