#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s: string
 * @accept: string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int counter_s = 0;
	unsigned int counter_accept = 0;

	while (s[counter_s] != 0)
	{
		while (accept[counter_accept] != 0)
		{
			if (s[counter_s] == accept[counter_accept])
				return (&s[counter_s]);
			counter_accept++;
		}
		counter_accept = 0;
		counter_s++;
	}

	return (0);
}
