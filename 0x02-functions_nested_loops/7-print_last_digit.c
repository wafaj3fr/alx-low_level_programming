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
	printf("%d", l);
	return(l);
}
