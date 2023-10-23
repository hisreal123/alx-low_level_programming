#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list
 * @head: A pointer to a pointer to the head of the linked list
 *
 * Description:
 * This function removes the first node of a linked list and returns the
 * integer value stored in that node. The 'head' pointer is updated to
 * point to the new head of the list.
 *
 * Return: The integer value from the removed node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int data;

	if (!*head || !head)
		return (0);


	if (*head != NULL)
	{
		new_node = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(new_node);
	}

	return (data);
}
