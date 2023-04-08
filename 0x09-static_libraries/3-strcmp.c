#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparisson
 */
int _strcmp(char *s1, char *s2)
{
	int pos = 0;

	while (s1[pos] != 0 && s2[pos] != 0 && s1[pos] == s2[pos])
	{
		pos++;
	}
	return (s1[pos] - s2[pos]);
}
