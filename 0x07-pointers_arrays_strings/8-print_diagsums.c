#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals
 * @a: pointer to the array
 * @size: passes interger value used as size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 = sum1 + a[n];
		a += size;
	}
	a -= size;
	for (n = 0; n < size; n++)
	{
		sum2 = sum2 + a[n];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
