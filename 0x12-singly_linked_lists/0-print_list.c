#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function to print linked list
 * @h: pointer to a node
 * Return: number of notes printed
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
