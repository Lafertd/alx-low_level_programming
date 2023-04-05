#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located in s
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	int counter = 0;

	while (s[counter] != 0)
	{
		if (s[counter] == c)
		{
			return (&s[counter]);
		}
		counter++;
	}
	if (s[counter] == c)
		return (&s[counter]);
	return (0);
}
