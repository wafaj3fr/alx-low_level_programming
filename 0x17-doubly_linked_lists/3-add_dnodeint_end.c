#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be added in the new node
 * Return: Address of the new element (node), or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = new;
	new->prev = start;
	new->next = NULL;
	new->n = n;
	return (new);
}
