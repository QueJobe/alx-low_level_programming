#include "main.h"

/**
 * atoi - function to convert string to integer
 * @s: pointer to string
 * Return: integer value
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
	}
	for (; s[i] != '\0'; i++)
		n = s[i] - '0';
	return (sign * n);
}
