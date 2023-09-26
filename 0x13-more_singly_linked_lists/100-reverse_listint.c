#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to head
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = current->next;
		current->next = prev;
		prev = current;
	}

	(*head)->next = prev;
	return (*head);
}
