#include "lists.h"

/**
 * listint_len - eturns the number of elements in the linked list
 * @h: pointer to head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
