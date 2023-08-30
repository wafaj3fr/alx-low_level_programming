#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number to find square root for
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt_recursion(n));
}
