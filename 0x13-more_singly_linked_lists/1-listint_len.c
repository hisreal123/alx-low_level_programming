#include "lists.h"

/**
* listint_len - Prints all elements of a linked list of integers
* @h: A pointer to the head of the linked list
*
* Description:
* This function prints all the elements of a linked list of integers,
* one element per line. It also counts the number of elements in the list.
*
* Return: The number of elements in the linked list.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	size_t cont = 0;

	if (h == NULL)
		return (cont);

	head = h;

	while (head != NULL)
	{
		head = head->next;
		cont++;
	}

	return (cont);
}
