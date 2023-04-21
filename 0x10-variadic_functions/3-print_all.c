#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a char.
 * @arg: char to print
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_string - prints a string
 * @arg: string to print
 *
 * Return: void
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_int - prints an int
 * @arg: int to print
 *
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: float to print
 *
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	printer_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].symbol != NULL)
		{
			if (*(p[j].symbol) == format[i])
			{
				printf("%s", separator);
				p[j].print(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
