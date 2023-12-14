#include "main.h"

/**
 * _strlen - function to find lenght of string
 *
 * @s: variable to pass string
 * Return: returns lenght of string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
