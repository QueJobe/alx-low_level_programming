#include "main.h"

/**
 *_memset - Function to fill memory with constant byte
 *@s: pointer to input string
 *@b: pass the variable to add to s
 *@n: number of bytes to be filled
 *Return: returns pointers s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
