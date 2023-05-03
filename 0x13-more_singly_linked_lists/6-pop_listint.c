#include "lists.h"

/**
 * pop_listint - function to delete head node and save its data
 * @head: double pointer to the linked list
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	node_data = temp->n;
	free(temp);
	return (node_data);
}
