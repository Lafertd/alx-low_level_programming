#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int l = size;
	int m = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			while (l > 0)
			{
				_putchar('#');
				l--;
			}
			l = m;
			_putchar('\n');
			size--;
		}
	}
}
