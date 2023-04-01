#include "main.h"

/**
 * rot13 - unction that encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cba[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int pos = 0;
	int i;

	while (s[pos] != 0)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[pos] == abc[i])
			{
				s[pos] = cba[i];
				break;
			}
		}
		pos++;
	}
	return (s);
}
