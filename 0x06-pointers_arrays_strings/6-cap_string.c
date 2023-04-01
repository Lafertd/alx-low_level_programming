#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to string modificated
 */
char *cap_string(char *s)
{
	int pos = 0;
	char car[] = " \t\n,;.!?\"(){}";
	int i;

	while (s[pos] != 0)
	{
		if (s[pos] >= 'a' && s[pos] <= 'z')
		{
			if (pos == 0)
			{
				s[pos] -= 32;
			}
			else
			{
				for (i = 0; i <= 12; i++)
				{
					if (s[pos - 1] == car[i])
						s[pos] -= 32;
				}
			}
		}
		pos++;
	}
	return (s);
}
