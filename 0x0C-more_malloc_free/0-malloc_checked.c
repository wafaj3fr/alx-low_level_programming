#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory block to be allocated.
 * Return: pointer to the memory block.
 */

void *malloc_checked(unsigned int b)
{
	void* m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (b);
}
