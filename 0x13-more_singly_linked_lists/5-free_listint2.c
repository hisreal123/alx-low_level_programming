#include "lists.h"

/**
* free_listint2 - free an list
* @head: A pointer to a pointer to the head of the linked list
*
* Description:
* The function removes the pointed list in the node list
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}
