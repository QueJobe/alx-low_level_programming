#include "lists.h"

/**
 * sum_listint - function to calculate sum of all data in a linked list
 * @head: pointer to the linked list
 * Return: sum of data stroed in n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
