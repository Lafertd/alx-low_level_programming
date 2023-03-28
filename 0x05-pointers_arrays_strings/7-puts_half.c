#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != 0)
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (n > 0)
	{
		_putchar(str[len - n]);
		n--;
	}
	_putchar('\n');
}
