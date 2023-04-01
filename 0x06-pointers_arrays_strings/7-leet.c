#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to be modificated
 *
 * Return: pointer to modificated string
 */
char *leet(char *s)
{
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int pos = 0;
	int i;

	while (s[pos] != 0)
	{
		for (i = 0; i <= 9; i++)
		{
			if (s[pos] == let[i])
				s[pos] = num[i];
		}
		pos++;
	}
	return (s);
}
