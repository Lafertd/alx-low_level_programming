#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer
 * @b: contant byte
 * @n: bytes of the memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
