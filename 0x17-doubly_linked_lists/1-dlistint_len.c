#include "lists.h"

/**
* dlistint_len - prints the number of elements in a linked list
* @h: A pointer to the head of the doubly linked list.
*
* Return: The number of elements in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	int num_of_elements = 0;

	if (h == NULL)
		return (num_of_elements);

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);

}
