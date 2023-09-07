#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters in s2.
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	i = j = 0;
	if (s1)
		for (; s1[i]; i++)
			;
	if (s2)
		for (; s2[j]; s2++)
			;

	if (!(n >= j))
		j = n;
	s = malloc(sizeof(char) * (i + j) + 1);
	if (!s)
		return (NULL);
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
			s[k] = s1[i];
		else
			s[k] = s2[k - i];
	}
	s[k] = '\0';
	return (s);
}
