#include "lists.h"

/**
 * get_nodeint_at_index - function to find node at specific index
 * @head: pointer to the linked list
 * @index: index number of wanted node
 * Return: nth node if the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	while (node != NULL && count < index)
	{
		node = node->next;
		count++;
	}

	if (node == NULL)
		return (NULL);
	else
		return (node);
}
