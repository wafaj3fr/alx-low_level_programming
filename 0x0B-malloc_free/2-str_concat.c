#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s3;

	i = j = 0;
	if (s1 != '\0')
		for (i = 0; s1[i]; i++)
			;
	if (s2 != '\0')
		for (j = 0; s2[j]; j++)
			;
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == 0)
		return (NULL);
	k = 0;
	while (k < (i + j))
	{
		if (k < i)
			s3[k] = s1[k];
		else
			s3[k] = s2[k - i];
		k++;
	}
	s3[k] = 0;
	return (s3);
}
