#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Find a value in a sorted array of integers using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t next;
	size_t i;

	if (array == NULL)
		return (-1);

	while (next < size && array[next] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", next, array[next]);
		prev = next;
		next += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);

	for (i = prev; i < size && i <= next; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
