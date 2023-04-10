#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates charcater in a string
 * @s: pointers to the string
 * @c: passes character to be searched for
 * Return: returns pointer or null
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
