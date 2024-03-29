#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node end
 * @head: head
 * @str: str
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = length;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_list;

	return (new_list);
}
