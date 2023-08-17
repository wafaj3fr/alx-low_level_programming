#include <stdio.h>
#include "main.h"

/**
 * main - Etry point
 * Return: 0 is success
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			putchar(i);
			putchar(' ');
		}
		printf("\n");
		return (0);
	}
}
