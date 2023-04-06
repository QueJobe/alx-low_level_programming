#include "main.h"

/**
 * _prime - function to check for prime number
 * @num: passes a number we chacking
 * @i: used as the iteration value
 * Return: 1 if number is prime and 0 otherwise
 */

int _prime(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i == num / 2)
		return (1);
	return (_prime(num, (i + 1)));
}

/**
 * is_prime_number - function to check for prime number
 * @n: passes the input number
 * Return: 1 if number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (_prime(n, i));
}
