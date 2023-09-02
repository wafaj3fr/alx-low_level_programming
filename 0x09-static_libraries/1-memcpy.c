#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: destination string
 * @src: source string
 * @n: number of elemnts
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
