#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @x: the last digit
 * Return: x
 */

int print_last_digit(int x)
{
	int l = x % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
