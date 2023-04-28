#include "lists.h"

/**
 * add_node - function to add new node to a list
 * @head: pointer to start of list
 * @str: pointer to string
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * len - function to find lenght of string
 * @str: pointer to the string
 * Return: length of string
 */

int len(const char *str)
{
	int i;
	int lenght = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		lenght++;
	return (lenght);
}
