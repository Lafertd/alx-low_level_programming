#include "main.h"

/**
 * divisor - function that identifies if div is a divisor of n
 * @n: int number
 * @div: divisor
 *
 * Return: 1 if n is prime 0 otherwise
 */

int divisor(int n, int div)
{
	if (div > n / 2)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (divisor(n, div + 1));
}

/**
 * is_prime_number -  function that identifies a prime number
 * @n: inte number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisor(n, 2));
}
