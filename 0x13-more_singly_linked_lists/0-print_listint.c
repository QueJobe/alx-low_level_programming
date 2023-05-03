#include "lists.h"

/**
 * print_listint - function to prints the data in nodes
 * @h: pointer to the start of the linked list
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
