#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 is success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
