#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: pointer array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *sym;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	sym = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(sym) == NULL || sym[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(sym)(a, b));

	return (0);
}
