#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of the allocated space for ptr.
 * @new_size: new size.
 * Return: pointer to the new memory block or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *b;

	if (ptr == NULL)
	{
		b = malloc(new_size);
		return (b);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size = 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)b + i) = *((char *) ptr + i);
			free(ptr);
			return (b);
		}
	}
}
