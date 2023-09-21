#include "main.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
