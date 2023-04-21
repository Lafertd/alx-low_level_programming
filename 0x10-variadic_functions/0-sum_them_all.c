#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that adds the arguments passed to it
 * @n: the arguments counter
 *
 * Return: if n == 0 return (0) otherwise return sum;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
