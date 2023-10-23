#include "lists.h"

/**
* sum_listint - Calculates the sum of all integer values in a linked list
* @head: A pointer to the head of the linked list
*
* Description:
* This function computes the sum of all integer values in a linked list.
*
* Return: The sum of all integer values in the linked list,
* or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum +=  head->n;
		head = head->next;
	}

	return (sum);
}
