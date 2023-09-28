#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: given index
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;
	unsigned int i;

	if (index >= bits)
		return (-1);

	for (i = bits - 1; i < bits; i--)
	{
		if (i == index)
			return ((n >> i) & 1);
	}

	return (-1);
}
