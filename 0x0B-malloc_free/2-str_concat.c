#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate strings
 * @s1: pointers to first string
 * @s2: pointer to second string
 * Return: pointers to string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j = 0;
	int s1_len = 0;
	int s2_len = 0;
	int s3_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		s1_len++;
	for (i = 0; s2[i]; i++)
		s2_len++;
	s3_len = s1_len + s2_len;

	s3 = malloc(sizeof(char) * (s3_len + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
