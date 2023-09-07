#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: allocated memory block size.
 * Return: pointer to the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else
		return (NULL);
}
