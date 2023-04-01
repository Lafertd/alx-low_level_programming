#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a
 * string to uppercase
 * @s: string to change
 *
 * Return: string modificated
 */
char *string_toupper(char *s)
{
	int pos = 0;

	while (s[pos] != 0)
	{
		if (s[pos] <= 'z' && s[pos] >= 'a')
		{
			s[pos] -= 32;
		}
		pos++;
	}
	return (s);
}
