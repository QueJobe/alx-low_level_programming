#include "main.h"

/**
 * _strspn - function that gets lenght of prefix substring
 * @s: pointers to the string
 * @accept: point the the substring
 * Return: returns lenght of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (len);
			}
		}
		s++;
	}
	return (len);
}
