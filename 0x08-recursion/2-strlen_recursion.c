#include "main.h"

/**
 * _strlen_recursion - function to check string lenght
 * @s: pointer to the string
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
