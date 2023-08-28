#include "main.h"

/**
 * _memset() - ills the first n bytes of the memory area
 * @s: pointer to first n
 * @n: number of elements
 * @b: the constant byte
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
