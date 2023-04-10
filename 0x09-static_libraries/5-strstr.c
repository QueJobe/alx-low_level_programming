#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 * Return: Return pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (needle[i] == haystack[i]);
		}
		haystack++;
	}
	return (NULL);
}

