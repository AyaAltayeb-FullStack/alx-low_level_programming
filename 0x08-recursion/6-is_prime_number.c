#include "main.h"
/**
 * actual_prime - check if a number is prime ot not
 * @n: number
 * @i: iterator
 * Return: 1 if n is prime, or 0 if not prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - check if a number is prime or not
 * @n: a number
 * Return: 1 if n is a prime number, or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
