#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the console
 * @n: number of times the character  should be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 1;
	int b = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n >= 1)
		{
			while (a < b)
			{
				_putchar(' ');
				a++;
			}
			a = 1;
			b++;
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
}
