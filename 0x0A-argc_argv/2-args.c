#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to print arguments
 * @argc: argumnets counter
 * @argv: arguments pointer
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
