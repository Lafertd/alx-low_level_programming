#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;
	int n = 0;

	while (str[n] != 0)
		n++;
	n = n - 1;
	while (a <= n)
	{
		_putchar(str[a]);
			a += 2;
	}
	_putchar('\n');
}
