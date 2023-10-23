#include "lists.h"

/**
* pop_listint - Adds a new node at the beginning of a linked list
* @head: A pointer to a pointer to the head of the linked list
* @n: The integer value to be stored in the new node
*
* Description:
* This function creates a new node with the given integer value 'n' and
* adds it to the beginning of a linked list. The 'head' pointer is updated
* to point to the new node, effectively making it the new head of the list.
*
* Return: A pointer to the newly added node, or NULL on failure.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!*head || !head)
		return (0);


	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;


	return (data);
}
