#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to pointer to head
 * @idx: given index
 * @n: data of the node to be inserted
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp = *head;
	unsigned int c;

	node = malloc(sizeof(listint_t));
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;
	c = 0;

	while (temp != NULL)
	{
		if (c == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
		c++;
	}

	return (node);
}
