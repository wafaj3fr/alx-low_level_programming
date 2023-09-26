#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: pointer to first node
 * @index: index of the node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int c;

	if (head == NULL)
		return (NULL);

	temp = head;
	c = 0;

	while (temp != NULL)
	{
		if (c == index)
		{
			return (temp);
		}
		temp = temp->next;
		c++;
	}

	return (NULL);
}

