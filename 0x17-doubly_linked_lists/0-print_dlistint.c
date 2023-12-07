#include "lists.h"

/**
* print_dlistint - Prints all the elements of a doubly linked list.
* @h: A pointer to the head of the doubly linked list.
*
* Return: The number of nodes in the list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}


	return (node_count);
}