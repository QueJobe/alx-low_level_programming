#include "main.h"
#include <stddef.h>
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

	if (dest == NULL)
		return (NULL);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
