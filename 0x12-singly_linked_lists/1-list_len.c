#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num of elements
 * @h: pointer
 * Return: num elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
