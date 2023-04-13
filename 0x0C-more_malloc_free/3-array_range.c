#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value included in the array
 * @max: max value included in the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
