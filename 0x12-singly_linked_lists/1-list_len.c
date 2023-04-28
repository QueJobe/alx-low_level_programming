#include "lists.h"

/**
 * list_len - function to find lenght of list
 * @h: pointer to the list
 * Return: lenght of linkrf list
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
