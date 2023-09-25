#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to pointer
 * @n: element to be added to the list
 * Return: address to the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;
	return (node);
}
