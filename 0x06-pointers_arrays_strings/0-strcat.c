#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: will point to destination string
 * @src: points to source string
 * Return: will return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int s_len = 0;

	while (dest[i++])
		s_len++;
	for (i = 0; src[i]; i++)
		dest[s_len++] = src[i];
	return (dest);
}
