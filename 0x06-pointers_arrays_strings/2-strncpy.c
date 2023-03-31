#include "main.h"

/**
 * _strncpy - copies source string to destination string
 * @dest: points to destination string
 * @src: points to source string
 * @n: passes an interger value
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
