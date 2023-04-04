#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any
 * set of bytes
 * @s: pointer to a string
 * @accept: point to seached string
 * Return: returns pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
