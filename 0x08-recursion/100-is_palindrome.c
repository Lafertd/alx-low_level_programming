#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 *
 * Return:  length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - check if the string is a palindrome
 * @i: int number
 * @j: lenght of the string minus 1
 * @p: string
 *
 * Return: 1 if is palindrome 0 otherwise
 */

int palindrome(int i, int j, char *p)
{
	if (i >= j)
		return (1);
	else if (p[i] != p[j])
		return (0);
	else
		return (palindrome(i + 1, j - 1, p));
}

/**
 * is_palindrome - function that identifias a palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (*s == 0)
		return (1);
	return (palindrome(0, len, s));
}
