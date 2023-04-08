#include "main.h"

/**
 * _puts -  function that prints a string, followed by a new line, to stdout
 * @str: string to be printed
 *
 * Return: void(Solved)
 */
void _puts(char *str)
{
	int d = 0;

	while (str[d] != 0)
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
