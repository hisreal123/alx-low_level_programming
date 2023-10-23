#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list
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

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
