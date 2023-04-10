#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument pointer variable
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
