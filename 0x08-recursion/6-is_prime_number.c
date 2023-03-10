#include "main.h"

int prime_number(int n, int 1);
/**
 * is_prime_number - a function that checks if an input interger is prime
 * @n: the number to be checked
 * Return: returns 1 if the input interger is prime, returns 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n - 1));
}

/**
 * prime_number - a function that checks if a number is prime using recursion
 * @n: the number to be checked
 * @1: a variable used to iterate
 * Return: return 1 if the number is prime and 0 otherwise
 */
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime_number(n, i - 1));
}
