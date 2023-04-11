#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to allcated new mem space
 * @str: pointer to string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dp;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	dp = malloc(sizeof(char) * (len + 1));

	if (dp == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dp[i] = str[i];
	dp[len] = '\0';
	return (dp);
}
