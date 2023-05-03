#include "lists.h"

/**
 * free_listint - function to delete linked list
 * @head: pointer to head of linked list
 * Return: nothing void
 */

void free_listint(listint_t *head)
{
	listint_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
}
