#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add integers
 * @a: first integer
 * @b: second interger
 * Return: interger value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function for subtraction
 * @a: first integer
 * @b: second integer
 * Return: interger value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: first integer
 * @b: second integer
 * Return: integer value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: first integer
 * @b: second integer
 * Return: interger value
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - Modulo function
 * @a: first integer
 * @b: second integer
 * Return: returns remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
