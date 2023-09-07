#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: starting integer.
 * @max: last integer.
 * Return: pointer to the array or NULL.
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		Return (NULL);
	i = max - min;
	s = malloc(sizeof(int) * i);
	if (!s)
		return (NULL);
	while (max > min)
	{
		s[i] = max;
		i--;
		max--;
	}
	s[i] = min;
	return (s);
}
