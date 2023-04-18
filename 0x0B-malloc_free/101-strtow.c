#include "main.h"
#include <stdlib.h>

/**
 * length - length of a word
 * @str: string
 *
 * Return: length
 */
int length(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != 0 && str[i] != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * number_words - counts the number of words of a string
 * @str: string
 *
 * Return: number of words
 */
int number_words(char *str)
{
	int i = 0;
	int n = 0;
	int len = 0;

	for (i = 0; str[i] != 0; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			n++;
			i += length(str + i);
		}
	}
	return (n);
}

/**
 * strtow - function that splits a string into words
 * @str: string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int num, n, let, l;
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num = number_words(str);
	if (num == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num + 1));
	if (words == NULL)
		return (NULL);

	for (n = 0; n < num; n++)
	{
		while (str[i] == ' ')
			i++;
		let = length(str + i);

		words[n] = malloc(sizeof(char) * let + 1);
		if (words[n] == NULL)
		{
			for (; n >= 0; n--)
				free(words[n]);
			free(words);
			return (NULL);
		}
		for (l = 0; l < let; l++)
			words[n][l] = str[i++];
		words[n][l] = '\0';
	}
	words[n] = NULL;
	return (words);
}
