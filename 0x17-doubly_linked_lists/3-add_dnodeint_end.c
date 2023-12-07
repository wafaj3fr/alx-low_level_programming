#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be added in the new node
 * Return: Address of the new element (node), or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	dlistint_t *temp;
	for (temp = *head; temp->next != NULL; temp = temp->next)
		;

	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
