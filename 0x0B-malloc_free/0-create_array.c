#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: passes the size of array
 * @c: initilization character
 * Return: pointer the the array NUll if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			a[i] = c;
	}
	return (a);
}

