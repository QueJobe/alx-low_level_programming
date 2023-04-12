#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arrguments counter
 * @argv: arrugumet pointer arays
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n, i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
