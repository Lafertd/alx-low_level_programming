#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a
 * new line
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != 0)
		n++;

	while (n > 0)
	{
		_putchar(s[n - 1]);
		n--;
	}
	_putchar('\n');
}
