#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string destination
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0;

	while (len1 < n && src[len1] != 0)
	{
		dest[len1] = src[len1];
		len1++;
	}
	while (len1 < n)
	{
		dest[len1] = '\0';
		len1++;
	}

	return (dest);
}

