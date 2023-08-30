#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number that's factorial has to be measured
 * Return: factorial of n or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1);
			}
