#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete a node
 * @head: double pointer to linked list
 * @index: index to node to be deleted
 * Return: 1 if successful and -1 if unsuccessfull
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
