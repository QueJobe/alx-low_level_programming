#include "main.h"

/**
 * _pow_recursion - function that raises x to the pow of y
 * @x: pasess the x value
 * @y: passes the y value
 * Return: returns x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
