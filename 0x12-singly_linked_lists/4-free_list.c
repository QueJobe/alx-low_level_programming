#include "lists.h"

/**
 * free_list - function to free memory used by linked list
 * @head: pointer to the list
 * Returns: Nothing void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
