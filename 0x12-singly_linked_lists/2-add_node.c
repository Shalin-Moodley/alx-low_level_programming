#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer
 * @str: string
 * Return: location of element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;

	while (str[size])
		size++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->size = size;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
