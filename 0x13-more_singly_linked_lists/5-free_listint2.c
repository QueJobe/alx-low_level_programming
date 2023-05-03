#include "lists.h"

/**
 * free_listint2 - function to free linked list
 * and set head to NULL
 * @head: double pointer to linked list
 * Return: nothing void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
