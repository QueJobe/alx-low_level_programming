#include "lists.h"

/**
 * dlistint_len - numbers elements in the linked list
 * @h: Pointer to the head node of a linked list.
 * Return: Number of nodes on the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
