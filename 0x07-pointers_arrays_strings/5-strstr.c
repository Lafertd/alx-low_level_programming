#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int h = 0;
	int n = 0;

	while (haystack[h] != 0)
	{
		while (needle[n] != 0 && haystack[h] == needle[0])
		{
			if (haystack[h + n] == needle[n])
				n++;
			else
				break;

		}
		if (needle[n] != 0)
		{
			n = 0;
			h++;
		}
		else
			return (&haystack[h]);
	}
	return (0);
}
