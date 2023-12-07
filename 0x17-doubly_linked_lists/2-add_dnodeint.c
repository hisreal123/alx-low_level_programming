#include "lists.h"

/**
* add_dnodeint - adds node at the beginning of the liist
* @head: A pointer to the head of the doubly linked list.
* @n: int value
* Return: The number of elements in the list.
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;

	return (*head);
}
