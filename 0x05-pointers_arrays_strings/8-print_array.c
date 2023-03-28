#include "main"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array to be printed
 * @n: the number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int pos = 0;

	while (pos < n)
	{
		printf("%d", a[pos]);
		if (pos < (n - 1))
			printf(", ");
		pos++;
	}
	printf("\n");
}
