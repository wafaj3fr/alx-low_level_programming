#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: elements of src
 * Return: a pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
