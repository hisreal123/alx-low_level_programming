#include "lists.h"

/**
* free_listint - frees all pointers
* @head: A pointer to the head of the linked list
*
* Description:
* This function frees the pointers
*
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		break;
	}

	tmp = tmp->next;
	free(head);
	head = tmp;

}
