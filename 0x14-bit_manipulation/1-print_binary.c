#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary
 * Return: binary representation
 */

int print_binary(unsigned long int n)
{
	int b;

	if (n > 1)
	{
		b = print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
