#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lens1, lens2, lencon, counter;
	char *con;

	if (s1 == NULL)
	{
		lens1 = 0;
	}
	else
	{
		for (lens1 = 0; s1[lens1]; lens1++)
			;
	}
	if (s2 == NULL)
	{
		lens2 = 0;
	}
	else
	{
		for (lens2 = 0; s2[lens2]; lens2++)
			;
	}

	lencon = lens1 + lens2 + 1;
	con = malloc(sizeof(char) * lencon);

	if (con == NULL)
		return (NULL);

	for (counter = 0; counter < lens1; counter++)
		con[counter] = s1[counter];
	for (counter = 0; counter < lens2; counter++)
		con[counter + lens1] = s2[counter];
	con[lens1 + lens2] = '\0';
	return (con);
}
