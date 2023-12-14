#include "main.h"

/**
 * _strncat - concatenates two strings using at
 * most n bytes of src
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: used to pass n bytes
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int str_len = 0;

	while (dest[i++])
		str_len++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[str_len++] = src[i];
	}
	return (dest);
}
