#include "lists.h"

/**
 * listint_len - function to count number of nodes
 * @h: pointer to the head node
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
