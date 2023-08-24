#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
