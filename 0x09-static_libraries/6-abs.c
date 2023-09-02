#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @x: integer to be checked
 * Return: x, 0 or -x
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x == 0)
		return (0);
	else
		return (-x);
}
