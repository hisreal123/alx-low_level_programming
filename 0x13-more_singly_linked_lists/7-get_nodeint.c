#include "lists.h"

/**
* get_nodeint_at_index - Retrieves a node from a linked list at a specified index
* @head: A pointer to the head of the linked list
* @index: The index of the node to retrieve (0-based)
*
* Description:
* This function returns the node at the specified index in a linked list.
* The index is 0-based, where 0 corresponds to the first node in the list.
*
* Return: A pointer to the node at the specified index, or NULL if the node is not found.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	};

	return (current);
}
