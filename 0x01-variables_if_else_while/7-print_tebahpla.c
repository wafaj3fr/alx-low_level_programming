#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 is success
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
