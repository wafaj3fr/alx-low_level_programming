#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */

void print_number(int n)
{
	int i, j, d, s, p;
	unsigned int temp, numchar, number;

	d = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		d++;
	}
	s = d + 1;
	p = 1;
	i = 1;

	while (i < s)
	{
		p = p * 10;
		i++;
	}
	j = p;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
