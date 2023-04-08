#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: prefix
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int m;
	unsigned int len_s = 0;
	unsigned int len_accept = 0;

	while (s[len_s] != 0)
		len_s++;

	while (accept[len_accept] != 0)
		len_accept++;

	for (n = 0; n < len_s; n++)
	{
		for (m = 0; m < len_accept; m++)
		{
			if (s[n] == accept[m])
				break;
		}
		if (accept[m] == 0)
			break;
	}
	return (n);
}
