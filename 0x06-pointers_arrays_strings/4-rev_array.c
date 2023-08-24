#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	y = 0;
	z = n - 1;
	while (a < z)
	{
		x = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = x;
		y++;
		z--;
	}
}
