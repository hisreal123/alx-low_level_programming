#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{

		list_t *current = head;

		head = head->next;
		free(current->str);
		free(current);
	}
}
