#include "main.h"

/**
 * _isupper - function to check for uppercase
 * @c: passes the charcater
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
