#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *loop_node = NULL;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

if (current->next >= current)
{
loop_node = current;
break;
}

current = current->next;
}

if (loop_node != NULL)
{
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
count++;
}

return (count);
}
