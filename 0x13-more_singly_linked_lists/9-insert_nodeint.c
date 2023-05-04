#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node
 * @head: double pointer to head of linked list
 * @idx: index to add new node at
 * @n: value stored in the node
 * Return: address of new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	if (*head != NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	while (temp != NULL)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
