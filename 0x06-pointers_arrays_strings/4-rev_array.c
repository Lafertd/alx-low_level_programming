#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int pos = 0;
	int temp;

	while (pos < n)
	{
		temp = a[pos];
		a[pos] = a[n - 1];
		a[n - 1] = temp;
		pos++;
		n--;
	}
}
