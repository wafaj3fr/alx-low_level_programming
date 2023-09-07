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
	unsigned int i, j = n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		j++;
	s = malloc(j + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s[i]; i++)
		s[j] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[j] = s2[i];

	s[j] = '\0';
	return (s);
}
