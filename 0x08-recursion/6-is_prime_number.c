#include "main.h"

/**
 * prime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 or -1
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1, on error -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
