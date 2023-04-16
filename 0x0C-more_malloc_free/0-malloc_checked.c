#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: size of memory required
 * Return: pointer to alloacated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mc = malloc(b);

	if (mc == NULL)
		exit(98);
	return (mc);
}
