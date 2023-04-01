#include "main.h"

/**
 * string_toupper - converts lower case to uppercase
 * @s: points to the string
 * Return: returns the upper case string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
