#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *                  as a parameter on each element of an array
 * @array: pointer to the first element of an integer
 * @size: the number of elments in the array
 * @action: pointer to a function that takes an integer argument
 *         and return nothing
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

