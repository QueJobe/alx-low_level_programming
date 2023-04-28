#include "lists.h"

/**
 * add_node_end - function to add node at end of list
 * @head: pointer to the list
 * @str: pointer to a string
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *element;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	element = *head;
	while (element->next != NULL)
		element = element->next;
	element->next = new_node;

	return (new_node);
}

/**
 * len - calculate lenght of string
 * @str: pointer to a string
 * Return: lenght of string
 */

int len(const char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
		lenght++;
	return (lenght);
}
