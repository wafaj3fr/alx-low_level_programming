#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: starting integer.
 * @max: last integer.
 * Return: pointer to the array or NULL.
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *b;

	if (min > max)
		Return (NULL);

	b = malloc(sizeof(int) * ((max - min) + 1));
	if (b != NULL)
	{
		for (i = min; i <= max; i++)
		{
			b[j] = i;
			j++;
		}
		return (b);
	}
	else
		return (NULL);
}
