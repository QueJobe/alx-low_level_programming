#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in
 *             an array and returns its index
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: A pointer to a function that takes an integer
 *       and returns an integer
 * Return: index of interger and -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
