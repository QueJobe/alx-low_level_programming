#include "main.h"

/**
 * rev_string - prints the string in reverse
 * @s: used to pass the string
 */
void rev_string(char *s)
{
	int lenght = 0, i;
	char tmp = s[0];

	while (s[lenght] != '\0')
		lenght++;
	for (i = 0; i < lenght; i++)
	{
		lenght--;
		tmp = s[i];
		s[i] = s[lenght];
		s[lenght] = tmp;
	}
}
