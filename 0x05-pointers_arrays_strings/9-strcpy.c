#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: string destination
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int pos = 0;

	while (src[pos] != 0)
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = src[pos];

	return (dest);
}
