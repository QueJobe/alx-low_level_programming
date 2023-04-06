#include "main.h"

/**
 * _sqrt - function to find the square root
 * @num: passes the number under square root
 * @base: passes iteration number
 * Return: Returns the root
 */

int _sqrt(int num, int base)
{
	if ((base * base) == num)
		return (base);
	if (base == num / 2)
		return (-1);
	return (_sqrt(num, (base + 1)));
}

/**
 * _sqrt_recursion - function to return root value
 * @n: the number under square root
 * Return: root if the number n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_sqrt(n, i));
}
