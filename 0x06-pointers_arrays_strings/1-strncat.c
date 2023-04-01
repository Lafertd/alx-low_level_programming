#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src to be appened
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j == n)
		dest[i] = '\0';
	return (dest);
}
