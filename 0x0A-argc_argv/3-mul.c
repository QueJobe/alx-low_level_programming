#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counter variable
 * @argv: argumant pointer variable
 * Return: 0 and 1 if error
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc < 2)
	{
		printf("Error \n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;
	printf("%d\n", mult);

	return (0);
}
