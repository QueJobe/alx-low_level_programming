#include "main.h"

/**
 *_strcpy - copies a string including null character
 *@src: string to be copied
 *@dest: buffer to carry copied string
 *Return: return @dest with copied string
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
