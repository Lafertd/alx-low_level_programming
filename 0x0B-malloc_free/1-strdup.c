#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0;
	unsigned int counter;

	if (str == NULL)
		return (NULL);

	while (str[len] != 0)
		len++;
	len++;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (counter = 0; counter < len; counter++)
	{
		s[counter] = str[counter];
	}
	return (s);
}
