#include "main.h"

/**
 * _isalpha - checks for lower case and uper case characters
 * @c : is ASCII code for characters
 * Return: 1 id lowercase and upercase character is found
 * 0 if it is not found
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
