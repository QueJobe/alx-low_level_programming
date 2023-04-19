#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: pointer to character array
 * @f: function pointer that takes a pointer
 *     to a character array as an argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
