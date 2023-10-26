#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number
 * @index: given index
 * Return: 1 for success -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}

