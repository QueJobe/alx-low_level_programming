#include "main.h"

/**
 * _islower - checks for lower case character
 * @c : Value is in ASCII code
 * Return: 1 if lowercase is found and 0 if not found
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
