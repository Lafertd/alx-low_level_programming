#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: pointer to char variable
 *
 * Return: return int (Solved)
 */
 void _print_rev_recursion(char *s)
{
	if (*s != 0)
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
