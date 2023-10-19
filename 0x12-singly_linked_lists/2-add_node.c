#include "lists.h"

#include <stdlib.h>
#include <string.h>


/**
 * add_node - add node
 * @head: head
 * @str: str
 *
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = length;
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
