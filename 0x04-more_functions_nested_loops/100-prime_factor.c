#include <stdio.h>
#include "main.h"

/**
 * main - program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 *
 * Return: 0 exit success
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n / 2; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", n);

	return (0);
}
