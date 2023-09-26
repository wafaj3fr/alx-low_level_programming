#include "lists.h"

/**
 * find_listint_loop - finds a loop
 * @head: pointer to fist node
 * Return: address where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	listint_t *tortoise = head, *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			return (head);
		}
	}

	return (NULL);
}
