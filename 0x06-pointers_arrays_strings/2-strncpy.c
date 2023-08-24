#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of elements
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
