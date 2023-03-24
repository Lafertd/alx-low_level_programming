#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a = 1;
	int b = size;
	int c = size;
	int d = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			while (a < size)
			{
				_putchar(' ');
				a++;
			}
			a = 1;
			b--;
			while (c > b)
			{
				_putchar('#');
				c--;
			}
			_putchar('\n');
			c = d;
			size--;
		}
	}
}
