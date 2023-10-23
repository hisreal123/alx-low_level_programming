#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a specific
* index in a linked list
* @head: A pointer to a pointer to the head of the linked list
* @idx: The index at which the new node should be inserted (0-based)
* @n: The integer value to be stored in the new node
*
* Description:
* This function inserts a new node with the given integer value
* 'n' at the specified index in a linked list.
* The 'head' pointer may be updated to point to the new node if the
* new node is inserted at the beginning of the list.
*
* Return: A pointer to the newly inserted node, or NULL on failure.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);


	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
