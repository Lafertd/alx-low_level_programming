#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0;
	char p[500];
	int a;

	while (s[n] != 0)
	{
		p[n] = s[n];
		n++;
	}
	n = n - 1;
	a = n;
	while (n >= 0)
	{
		s[a - n] = p[n];
		n--;
	}
}
