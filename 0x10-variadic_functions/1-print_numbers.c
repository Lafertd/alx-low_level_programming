#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints the numbers passed
 * @separator: string to be printed between the numbers
 * @n: the number of integers passed to the function
 *
 * Return: return 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	va_start(ls, n);
	unsigned int i;
	int value;
	for (i = 0, i < n, i++)
	{	
		value = va_arg(ls, int);
		printf("%d", value);
		if (n > 1 && separator != NULL)
		prinft("%s", *separator);
	}
	_putchar('\n');
	va_end(ls);
}
